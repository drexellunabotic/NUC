cmake_minimum_required(VERSION 3.8)
project(cpp_pubsub)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(ros_phoenix REQUIRED)
find_package(serial REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
"msg/PhoenixControl.msg"
DEPENDENCIES ros_phoenix # Add packages that above messages depend on, in this case geometry_msgs for Sphere.msg
)

add_executable(serial_com src/arduino.cpp)
ament_target_dependencies(serial_com rclcpp std_msgs geometry_msgs sensor_msgs serial)
target_link_libraries(serial_com serial)
  
install(TARGETS
  serial_com
  DESTINATION lib/${PROJECT_NAME})

add_executable(listener src/my_sbr.cpp)
ament_target_dependencies(listener rclcpp std_msgs geometry_msgs sensor_msgs)

install(TARGETS
  listener
  DESTINATION lib/${PROJECT_NAME})
  
add_executable(talker src/my_pub.cpp)
ament_target_dependencies(talker rclcpp std_msgs geometry_msgs sensor_msgs ros_phoenix)
  
install(TARGETS
  talker    
  DESTINATION lib/${PROJECT_NAME})
  
add_executable(commander src/pubsub_node.cpp)
ament_target_dependencies(commander rclcpp sensor_msgs geometry_msgs serial)
target_link_libraries(commander serial)

install(TARGETS
  commander
  DESTINATION lib/${PROJECT_NAME})
  
add_executable(rover src/rover.cpp)
ament_target_dependencies(rover rclcpp sensor_msgs geometry_msgs serial)
target_link_libraries(rover serial)

install(TARGETS
  rover
  DESTINATION lib/${PROJECT_NAME})
  
add_executable(motors src/just_motors.cpp)
ament_target_dependencies(motors rclcpp sensor_msgs ros_phoenix serial) 
target_link_libraries(motors serial)

install(TARGETS
  motors
  DESTINATION lib/${PROJECT_NAME})
  
add_executable(today src/today.cpp)
ament_target_dependencies(today rclcpp sensor_msgs ros_phoenix serial) 
target_link_libraries(today serial)

install(TARGETS
  today
  DESTINATION lib/${PROJECT_NAME})


# Install launch files.
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

ament_package()
