// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_phoenix:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_phoenix/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_phoenix
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_rev_limit
{
public:
  explicit Init_MotorStatus_rev_limit(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::ros_phoenix::msg::MotorStatus rev_limit(::ros_phoenix::msg::MotorStatus::_rev_limit_type arg)
  {
    msg_.rev_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_fwd_limit
{
public:
  explicit Init_MotorStatus_fwd_limit(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_rev_limit fwd_limit(::ros_phoenix::msg::MotorStatus::_fwd_limit_type arg)
  {
    msg_.fwd_limit = std::move(arg);
    return Init_MotorStatus_rev_limit(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_velocity
{
public:
  explicit Init_MotorStatus_velocity(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_fwd_limit velocity(::ros_phoenix::msg::MotorStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MotorStatus_fwd_limit(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_position
{
public:
  explicit Init_MotorStatus_position(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_velocity position(::ros_phoenix::msg::MotorStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorStatus_velocity(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_output_current
{
public:
  explicit Init_MotorStatus_output_current(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_position output_current(::ros_phoenix::msg::MotorStatus::_output_current_type arg)
  {
    msg_.output_current = std::move(arg);
    return Init_MotorStatus_position(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_output_voltage
{
public:
  explicit Init_MotorStatus_output_voltage(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_output_current output_voltage(::ros_phoenix::msg::MotorStatus::_output_voltage_type arg)
  {
    msg_.output_voltage = std::move(arg);
    return Init_MotorStatus_output_current(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_output_percent
{
public:
  explicit Init_MotorStatus_output_percent(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_output_voltage output_percent(::ros_phoenix::msg::MotorStatus::_output_percent_type arg)
  {
    msg_.output_percent = std::move(arg);
    return Init_MotorStatus_output_voltage(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_bus_voltage
{
public:
  explicit Init_MotorStatus_bus_voltage(::ros_phoenix::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_output_percent bus_voltage(::ros_phoenix::msg::MotorStatus::_bus_voltage_type arg)
  {
    msg_.bus_voltage = std::move(arg);
    return Init_MotorStatus_output_percent(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

class Init_MotorStatus_temperature
{
public:
  Init_MotorStatus_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_bus_voltage temperature(::ros_phoenix::msg::MotorStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorStatus_bus_voltage(msg_);
  }

private:
  ::ros_phoenix::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_phoenix::msg::MotorStatus>()
{
  return ros_phoenix::msg::builder::Init_MotorStatus_temperature();
}

}  // namespace ros_phoenix

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
