import os

from ament_index_python.packages import get_package_share_directory


from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration

from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit



def generate_launch_description():


    # Include the robot_state_publisher launch file, provided by our own package. Force sim time to be enabled
    # !!! MAKE SURE YOU SET THE PACKAGE NAME CORRECTLY !!!

    package_name='ros_phoenix' #<--- CHANGE ME

    rsp = IncludeLaunchDescription(
                PythonLaunchDescriptionSource([os.path.join(
                    get_package_share_directory(package_name),'launch','rsp.launch.py'
                )]), launch_arguments={'use_sim_time': 'true'}.items()
    )
    gazebo_params_file = os.path.join(get_package_share_directory(package_name),'config','gazebo_params.yaml')
    
    twist_mux_params = os.path.join(get_package_share_directory(package_name),'config','twist_mux.yaml')
    
    twist_mux = Node(
            package="twist_mux",
            executable="twist_mux",
            parameters=[twist_mux_params, {'use_sim_time': True}],
            remappings=[('/cmd_vel_out','/diffbot_base_controller/cmd_vel_unstamped')]
        )
    config_husky_ekf = os.path.join(get_package_share_directory(package_name), 'config', 'localization.yaml')
     
    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("ros_phoenix"), "rviz", "gz_slam_nav2_simulation.rviz"]
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
    pose = {'x': LaunchConfiguration('x_pose', default='-0.7'),
            'y': LaunchConfiguration('y_pose', default='-0.2'),
            'z': LaunchConfiguration('z_pose', default='0.00'),
            'R': LaunchConfiguration('roll', default='0.00'),
            'P': LaunchConfiguration('pitch', default='0.00'),
            'Y': LaunchConfiguration('yaw', default='4.75')}
    # Include the Gazebo launch file, provided by the gazebo_ros package
    gazebo = IncludeLaunchDescription(
                PythonLaunchDescriptionSource([os.path.join(
                    get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py')]),
                    launch_arguments={'extra_gazebo_args': '--ros-args --params-file ' + gazebo_params_file}.items()
             )
    
    # Run the spawner node from the gazebo_ros package. The entity name doesn't really matter if you only have a single robot.
    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                        arguments=['-topic', 'robot_description',
                                   '-entity', 'my_bot',
                                    '-x', pose['x'], '-y', pose['y'], '-z', pose['z'],
                                    '-R', pose['R'], '-P', pose['P'], '-Y', pose['Y']],
                        output='screen')


    diff_drive_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["diffbot_base_controller", "--controller-manager", "/controller_manager"],
    )

    joint_broad_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )
    
        # Delay rviz start after `joint_state_broadcaster`
    delay_rviz_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_broad_spawner,
            on_exit=[rviz_node],
        )
    )
      # Start robot localization using an Extended Kalman filter
    start_robot_localization_cmd = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node',
        output='screen',
        parameters=[config_husky_ekf,  {'use_sim_time': True}],
    )

    # Launch them all!
    return LaunchDescription([
        rsp,
        gazebo,
        twist_mux,
        spawn_entity,
        diff_drive_spawner,
        joint_broad_spawner,
        use_rviz_arg,
        delay_rviz_after_joint_state_broadcaster_spawner,
        start_robot_localization_cmd,
    ])