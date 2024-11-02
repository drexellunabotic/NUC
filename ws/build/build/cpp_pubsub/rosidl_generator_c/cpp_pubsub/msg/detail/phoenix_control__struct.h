// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__STRUCT_H_
#define CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "ros_phoenix/msg/detail/motor_control__struct.h"

/// Struct defined in msg/PhoenixControl in the package cpp_pubsub.
typedef struct cpp_pubsub__msg__PhoenixControl
{
  ros_phoenix__msg__MotorControl center;
} cpp_pubsub__msg__PhoenixControl;

// Struct for a sequence of cpp_pubsub__msg__PhoenixControl.
typedef struct cpp_pubsub__msg__PhoenixControl__Sequence
{
  cpp_pubsub__msg__PhoenixControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_pubsub__msg__PhoenixControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__STRUCT_H_
