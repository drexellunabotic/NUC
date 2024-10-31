import os
import launch

from launch import LaunchDescription
from launch_ros.actions import Node

from launch.substitutions import LaunchConfiguration, PythonExpression
from launch.conditions import IfCondition

def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time')

    odometry_node = Node(
        package='ros2_laser_scan_matcher',
        executable='laser_scan_matcher',
        parameters=[
            {'base_frame': 'base_link',
             'odom_frame': 'odom',
             'laser_frame': 'laser_frame',
             'publish_odom': '/laser_odom',
             'publish_tf': False}
        ],
        name='odometry_publisher',
    )

    return LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='use_sim_time',
            default_value='True',
            description='Flag to enable use_sim_time'),
        odometry_node
    ])