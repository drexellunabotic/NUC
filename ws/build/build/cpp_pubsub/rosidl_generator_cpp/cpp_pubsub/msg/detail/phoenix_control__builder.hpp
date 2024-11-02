// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__BUILDER_HPP_
#define CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_pubsub/msg/detail/phoenix_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_pubsub
{

namespace msg
{

namespace builder
{

class Init_PhoenixControl_center
{
public:
  Init_PhoenixControl_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_pubsub::msg::PhoenixControl center(::cpp_pubsub::msg::PhoenixControl::_center_type arg)
  {
    msg_.center = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::msg::PhoenixControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::msg::PhoenixControl>()
{
  return cpp_pubsub::msg::builder::Init_PhoenixControl_center();
}

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__BUILDER_HPP_
