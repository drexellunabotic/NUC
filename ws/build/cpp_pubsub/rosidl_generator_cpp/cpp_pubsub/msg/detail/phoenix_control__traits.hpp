// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__TRAITS_HPP_
#define CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_pubsub/msg/detail/phoenix_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "ros_phoenix/msg/detail/motor_control__traits.hpp"

namespace cpp_pubsub
{

namespace msg
{

inline void to_flow_style_yaml(
  const PhoenixControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PhoenixControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PhoenixControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cpp_pubsub

namespace rosidl_generator_traits
{

[[deprecated("use cpp_pubsub::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_pubsub::msg::PhoenixControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_pubsub::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_pubsub::msg::to_yaml() instead")]]
inline std::string to_yaml(const cpp_pubsub::msg::PhoenixControl & msg)
{
  return cpp_pubsub::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_pubsub::msg::PhoenixControl>()
{
  return "cpp_pubsub::msg::PhoenixControl";
}

template<>
inline const char * name<cpp_pubsub::msg::PhoenixControl>()
{
  return "cpp_pubsub/msg/PhoenixControl";
}

template<>
struct has_fixed_size<cpp_pubsub::msg::PhoenixControl>
  : std::integral_constant<bool, has_fixed_size<ros_phoenix::msg::MotorControl>::value> {};

template<>
struct has_bounded_size<cpp_pubsub::msg::PhoenixControl>
  : std::integral_constant<bool, has_bounded_size<ros_phoenix::msg::MotorControl>::value> {};

template<>
struct is_message<cpp_pubsub::msg::PhoenixControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__TRAITS_HPP_
