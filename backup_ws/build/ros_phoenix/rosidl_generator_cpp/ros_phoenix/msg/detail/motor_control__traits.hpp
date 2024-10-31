// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_phoenix:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_phoenix/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_phoenix
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorControl & msg, bool use_flow_style = false)
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

}  // namespace ros_phoenix

namespace rosidl_generator_traits
{

[[deprecated("use ros_phoenix::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_phoenix::msg::MotorControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_phoenix::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_phoenix::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_phoenix::msg::MotorControl & msg)
{
  return ros_phoenix::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_phoenix::msg::MotorControl>()
{
  return "ros_phoenix::msg::MotorControl";
}

template<>
inline const char * name<ros_phoenix::msg::MotorControl>()
{
  return "ros_phoenix/msg/MotorControl";
}

template<>
struct has_fixed_size<ros_phoenix::msg::MotorControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_phoenix::msg::MotorControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_phoenix::msg::MotorControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
