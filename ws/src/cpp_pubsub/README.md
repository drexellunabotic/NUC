# cpp_pubsub
### ROS2 DISTRO: Humble
### Gamepad/Joystick: 8BitDo Pro 2
### Mapped Input Topic [message type]: /joy [sensor_msgs/msg/Joy] 
### Mapped Output Topic [message type]: /diffbot_base_controller/cmd_vel [geometry_msgs/msg/TwistStamped]

## I/O topics and I/O message types can be mapped according to your requirement.
### Changes only have to be made for pubsub_node.cpp code.
### my_pub.cpp and my_sbr.cpp are nodes that be used to get a better understanding of how subscriber and publisher nodes are used.

This package is used to map the inputs of the joystick to control the diffbot provided in https://control.ros.org/master/doc/ros2_control_demos/doc/index.html#what-you-can-find-in-this-repository



## Cloning and Building
1. Clone the package into a ROS2 workspace
```
cd <ros_ws>/src
git clone https://github.com/vanderbiltrobotics/ros_phoenix
```

2. Build the workspace and source the setup file
```
cd <ros_ws>
colcon build --symlink-install
source install/setup.bash
```

## CLI Usage

1. Start a joy2cmd node
```
ros2 run rcpp_pubsub commander
```
2. open new terminal and run the joy_node
```
ros2 run joy joy_node
```
3. Open new terminal and echo the mapped and published command
'''
ros2 echo echo /diffbot_base_controller/cmd_vel
'''

## Commanding diffbot
1. Download all repositories
'''
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
git clone https://github.com/ros-controls/ros2_control_demos
cd ~/ros2_ws/
vcs import src < src/ros2_control_demos/ros2_control_demos.$ROS_DISTRO.repos
rosdep update --rosdistro=$ROS_DISTRO
sudo apt-get update
'''
2. Install dependencies:
'''
rosdep install --from-paths src --ignore-src -r -y
'''

3. Build everything, e.g. with:
'''
. /opt/ros/humble/setup.sh
colcon build --symlink-install
'''

4. Run the diffbot
'''
cd <ros2_ws>
source install/setup.bash
ros2 launch ros2_control_demo_example_2 diffbot.launch.py
'''

5. Move the diffbot following `CLI usage` instructions# cpp_pubsub
