// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_phoenix:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_phoenix/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_phoenix
{

namespace msg
{

namespace builder
{

class Init_MotorControl_value
{
public:
  explicit Init_MotorControl_value(::ros_phoenix::msg::MotorControl & msg)
  : msg_(msg)
  {}
  ::ros_phoenix::msg::MotorControl value(::ros_phoenix::msg::MotorControl::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_phoenix::msg::MotorControl msg_;
};

class Init_MotorControl_mode
{
public:
  Init_MotorControl_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_value mode(::ros_phoenix::msg::MotorControl::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorControl_value(msg_);
  }

private:
  ::ros_phoenix::msg::MotorControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_phoenix::msg::MotorControl>()
{
  return ros_phoenix::msg::builder::Init_MotorControl_mode();
}

}  // namespace ros_phoenix

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
