// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cpp_pubsub/msg/detail/phoenix_control__rosidl_typesupport_introspection_c.h"
#include "cpp_pubsub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cpp_pubsub/msg/detail/phoenix_control__functions.h"
#include "cpp_pubsub/msg/detail/phoenix_control__struct.h"


// Include directives for member types
// Member `center`
#include "ros_phoenix/msg/motor_control.h"
// Member `center`
#include "ros_phoenix/msg/detail/motor_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_pubsub__msg__PhoenixControl__init(message_memory);
}

void cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_fini_function(void * message_memory)
{
  cpp_pubsub__msg__PhoenixControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_member_array[1] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_pubsub__msg__PhoenixControl, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_members = {
  "cpp_pubsub__msg",  // message namespace
  "PhoenixControl",  // message name
  1,  // number of fields
  sizeof(cpp_pubsub__msg__PhoenixControl),
  cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_member_array,  // message members
  cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_type_support_handle = {
  0,
  &cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_pubsub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, msg, PhoenixControl)() {
  cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_phoenix, msg, MotorControl)();
  if (!cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_type_support_handle.typesupport_identifier) {
    cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_pubsub__msg__PhoenixControl__rosidl_typesupport_introspection_c__PhoenixControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
