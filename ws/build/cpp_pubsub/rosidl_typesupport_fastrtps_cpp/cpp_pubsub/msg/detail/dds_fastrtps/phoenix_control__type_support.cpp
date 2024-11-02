// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice
#include "cpp_pubsub/msg/detail/phoenix_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cpp_pubsub/msg/detail/phoenix_control__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ros_phoenix
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros_phoenix::msg::MotorControl &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_phoenix::msg::MotorControl &);
size_t get_serialized_size(
  const ros_phoenix::msg::MotorControl &,
  size_t current_alignment);
size_t
max_serialized_size_MotorControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros_phoenix


namespace cpp_pubsub
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
cdr_serialize(
  const cpp_pubsub::msg::PhoenixControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: center
  ros_phoenix::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.center,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cpp_pubsub::msg::PhoenixControl & ros_message)
{
  // Member: center
  ros_phoenix::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.center);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
get_serialized_size(
  const cpp_pubsub::msg::PhoenixControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: center

  current_alignment +=
    ros_phoenix::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.center, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
max_serialized_size_PhoenixControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: center
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_phoenix::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorControl(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cpp_pubsub::msg::PhoenixControl;
    is_plain =
      (
      offsetof(DataType, center) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PhoenixControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cpp_pubsub::msg::PhoenixControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PhoenixControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cpp_pubsub::msg::PhoenixControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PhoenixControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cpp_pubsub::msg::PhoenixControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PhoenixControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PhoenixControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PhoenixControl__callbacks = {
  "cpp_pubsub::msg",
  "PhoenixControl",
  _PhoenixControl__cdr_serialize,
  _PhoenixControl__cdr_deserialize,
  _PhoenixControl__get_serialized_size,
  _PhoenixControl__max_serialized_size
};

static rosidl_message_type_support_t _PhoenixControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PhoenixControl__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cpp_pubsub

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cpp_pubsub
const rosidl_message_type_support_t *
get_message_type_support_handle<cpp_pubsub::msg::PhoenixControl>()
{
  return &cpp_pubsub::msg::typesupport_fastrtps_cpp::_PhoenixControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_pubsub, msg, PhoenixControl)() {
  return &cpp_pubsub::msg::typesupport_fastrtps_cpp::_PhoenixControl__handle;
}

#ifdef __cplusplus
}
#endif
