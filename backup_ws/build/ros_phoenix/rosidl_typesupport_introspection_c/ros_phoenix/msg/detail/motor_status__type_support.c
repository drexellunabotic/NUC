// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_phoenix:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_phoenix/msg/detail/motor_status__rosidl_typesupport_introspection_c.h"
#include "ros_phoenix/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_phoenix/msg/detail/motor_status__functions.h"
#include "ros_phoenix/msg/detail/motor_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_phoenix__msg__MotorStatus__init(message_memory);
}

void ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_fini_function(void * message_memory)
{
  ros_phoenix__msg__MotorStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_member_array[9] = {
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bus_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, bus_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, output_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, output_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, output_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fwd_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, fwd_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rev_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_phoenix__msg__MotorStatus, rev_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_members = {
  "ros_phoenix__msg",  // message namespace
  "MotorStatus",  // message name
  9,  // number of fields
  sizeof(ros_phoenix__msg__MotorStatus),
  ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_member_array,  // message members
  ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle = {
  0,
  &ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_phoenix
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_phoenix, msg, MotorStatus)() {
  if (!ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle.typesupport_identifier) {
    ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_phoenix__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
