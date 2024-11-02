// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_phoenix:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PERCENT_OUTPUT'.
enum
{
  ros_phoenix__msg__MotorControl__PERCENT_OUTPUT = 0l
};

/// Constant 'POSITION'.
enum
{
  ros_phoenix__msg__MotorControl__POSITION = 1l
};

/// Constant 'VELOCITY'.
enum
{
  ros_phoenix__msg__MotorControl__VELOCITY = 2l
};

/// Constant 'CURRENT'.
enum
{
  ros_phoenix__msg__MotorControl__CURRENT = 3l
};

/// Constant 'FOLLOWER'.
enum
{
  ros_phoenix__msg__MotorControl__FOLLOWER = 5l
};

/// Constant 'MOTION_PROFILE'.
enum
{
  ros_phoenix__msg__MotorControl__MOTION_PROFILE = 6l
};

/// Constant 'MOTION_MAGIC'.
enum
{
  ros_phoenix__msg__MotorControl__MOTION_MAGIC = 7l
};

/// Constant 'MOTION_PROFILE_ARC'.
enum
{
  ros_phoenix__msg__MotorControl__MOTION_PROFILE_ARC = 10l
};

/// Constant 'DISABLED'.
enum
{
  ros_phoenix__msg__MotorControl__DISABLED = 15l
};

/// Struct defined in msg/MotorControl in the package ros_phoenix.
typedef struct ros_phoenix__msg__MotorControl
{
  int32_t mode;
  double value;
} ros_phoenix__msg__MotorControl;

// Struct for a sequence of ros_phoenix__msg__MotorControl.
typedef struct ros_phoenix__msg__MotorControl__Sequence
{
  ros_phoenix__msg__MotorControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_phoenix__msg__MotorControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
