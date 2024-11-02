// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_phoenix:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_phoenix/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_phoenix
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: bus_voltage
  {
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << ", ";
  }

  // member: output_percent
  {
    out << "output_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.output_percent, out);
    out << ", ";
  }

  // member: output_voltage
  {
    out << "output_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.output_voltage, out);
    out << ", ";
  }

  // member: output_current
  {
    out << "output_current: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: fwd_limit
  {
    out << "fwd_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.fwd_limit, out);
    out << ", ";
  }

  // member: rev_limit
  {
    out << "rev_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.rev_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << "\n";
  }

  // member: output_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.output_percent, out);
    out << "\n";
  }

  // member: output_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.output_voltage, out);
    out << "\n";
  }

  // member: output_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: fwd_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fwd_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.fwd_limit, out);
    out << "\n";
  }

  // member: rev_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rev_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.rev_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus & msg, bool use_flow_style = false)
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
  const ros_phoenix::msg::MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_phoenix::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_phoenix::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_phoenix::msg::MotorStatus & msg)
{
  return ros_phoenix::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_phoenix::msg::MotorStatus>()
{
  return "ros_phoenix::msg::MotorStatus";
}

template<>
inline const char * name<ros_phoenix::msg::MotorStatus>()
{
  return "ros_phoenix/msg/MotorStatus";
}

template<>
struct has_fixed_size<ros_phoenix::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_phoenix::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_phoenix::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
