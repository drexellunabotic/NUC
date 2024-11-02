// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cpp_pubsub/msg/detail/phoenix_control__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cpp_pubsub
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PhoenixControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cpp_pubsub::msg::PhoenixControl(_init);
}

void PhoenixControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cpp_pubsub::msg::PhoenixControl *>(message_memory);
  typed_message->~PhoenixControl();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PhoenixControl_message_member_array[1] = {
  {
    "center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_phoenix::msg::MotorControl>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_pubsub::msg::PhoenixControl, center),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PhoenixControl_message_members = {
  "cpp_pubsub::msg",  // message namespace
  "PhoenixControl",  // message name
  1,  // number of fields
  sizeof(cpp_pubsub::msg::PhoenixControl),
  PhoenixControl_message_member_array,  // message members
  PhoenixControl_init_function,  // function to initialize message memory (memory has to be allocated)
  PhoenixControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PhoenixControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PhoenixControl_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cpp_pubsub


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cpp_pubsub::msg::PhoenixControl>()
{
  return &::cpp_pubsub::msg::rosidl_typesupport_introspection_cpp::PhoenixControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cpp_pubsub, msg, PhoenixControl)() {
  return &::cpp_pubsub::msg::rosidl_typesupport_introspection_cpp::PhoenixControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
