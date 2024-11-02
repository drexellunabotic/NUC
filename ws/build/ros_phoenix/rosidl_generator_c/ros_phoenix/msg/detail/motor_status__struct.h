// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_phoenix:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorStatus in the package ros_phoenix.
typedef struct ros_phoenix__msg__MotorStatus
{
  double temperature;
  double bus_voltage;
  double output_percent;
  double output_voltage;
  double output_current;
  double position;
  double velocity;
  bool fwd_limit;
  bool rev_limit;
} ros_phoenix__msg__MotorStatus;

// Struct for a sequence of ros_phoenix__msg__MotorStatus.
typedef struct ros_phoenix__msg__MotorStatus__Sequence
{
  ros_phoenix__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_phoenix__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
