# Copyright 2020 ros2_control Development Team
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
import os
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

from launch.substitutions import LaunchConfiguration, ThisLaunchFileDir
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch import LaunchDescription, LaunchContext
from launch.actions import IncludeLaunchDescription, OpaqueFunction



def generate_launch_description():
    # """Generate launch description with multiple components."""
    # Conditionally include the container based on the value of the use_container argument
    use_container_arg = DeclareLaunchArgument(
        'use_container',
        default_value='false',
        description='Whether to launch the Phoenix container or not'
    )
    container = ComposableNodeContainer(
        name="PhoenixContainer",
        namespace="",
        package="ros_phoenix",
        executable="phoenix_container",
        parameters=[{"interface": "can0"},{"use_container": False}],
        composable_node_descriptions=[
            ComposableNode(
                package="ros_phoenix",
                plugin="ros_phoenix::TalonSRX",
                name="left_wheel_joint",
                parameters=[{"id": 1}, 
                            {"P": 500.0}, 
                            {"I": 1.0}, 
                            {"D":1.0},
                            {"sensor_multiplier":0.5},
                            {"edges_per_rot":4096}],
            ),
            ComposableNode(
                package="ros_phoenix",
                plugin="ros_phoenix::TalonSRX",
                name="right_wheel_joint",
                parameters=[{"id": 3},
                            {"P": 5.0}, 
                            {"I": 1.0}, 
                            {"D":1.0},
                            {"sensor_multiplier":-0.6},
                            {"edges_per_rot":4096}],
            ),
        ],
        condition=IfCondition(LaunchConfiguration('use_container')),
        output="screen",
        
    )
    twist_mux_params = os.path.join(get_package_share_directory('ros_phoenix'),'config','twist_mux.yaml')
    
    twist_mux = Node(
            package="twist_mux",
            executable="twist_mux",
            parameters=[twist_mux_params, {'use_sim_time': False}],
            remappings=[('/cmd_vel_out','/diffbot_base_controller/cmd_vel_unstamped')]
        )

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare("ros_phoenix"), "urdf", "diffbot.urdf.xacro"]
            ),
            " ",
            
        ]
    )
    #Get robot description file
    robot_description = {"robot_description": robot_description_content}

    #Get Robot controller node
    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("ros_phoenix"),
            "config",
            "diffbot_controllers.yaml",
        ]
    )


    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, robot_controllers],
        output="both",
    )
    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
        remappings=[
            ("/diff_drive_controller/cmd_vel_unstamped", "/cmd_vel"),
        ],
    )

    # Conditionally include the container based on the value of the use_rviz argument
    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("ros_phoenix"), "rviz", "gz_simulation.rviz"]
    )
    use_rviz_arg =DeclareLaunchArgument(
        'use_rviz',
        default_value='false',
        description='Whether to launch RViz or not'
    )
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        parameters=[{"use_rviz": False}],
        condition=IfCondition(LaunchConfiguration('use_rviz')),
        arguments=["-d", rviz_config_file],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["diffbot_base_controller", "--controller-manager", "/controller_manager"],
    )

    # Delay rviz start after `joint_state_broadcaster`
    delay_rviz_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[rviz_node],
        )
    )

    # Delay start of robot_controller after `joint_state_broadcaster`
    delay_robot_controller_spawner_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[robot_controller_spawner],
        )
    )
    config_husky_ekf = os.path.join(get_package_share_directory('ros_phoenix'), 'config', 'localization.yaml')
          # Start robot localization using an Extended Kalman filter
    start_robot_localization_cmd = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node',
        output='screen',
        parameters=[config_husky_ekf,  {'use_sim_time': False}],
    )
    multi_depth_camera = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([ThisLaunchFileDir(), '/rs_multi_camera_launch.py']),
        )
    rp_lidar = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([ThisLaunchFileDir(), '/rplidar.launch.py']),
        )
    nodes = [
        use_rviz_arg,
        use_container_arg,
        twist_mux,
        control_node,
        robot_state_pub_node,
        joint_state_broadcaster_spawner,
        delay_rviz_after_joint_state_broadcaster_spawner,
        delay_robot_controller_spawner_after_joint_state_broadcaster_spawner,
        container,
        start_robot_localization_cmd,
        rp_lidar,
        multi_depth_camera,

    ]

    return LaunchDescription(nodes)
