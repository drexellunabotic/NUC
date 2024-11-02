// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__STRUCT_HPP_
#define CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
#include "ros_phoenix/msg/detail/motor_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_pubsub__msg__PhoenixControl __attribute__((deprecated))
#else
# define DEPRECATED__cpp_pubsub__msg__PhoenixControl __declspec(deprecated)
#endif

namespace cpp_pubsub
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PhoenixControl_
{
  using Type = PhoenixControl_<ContainerAllocator>;

  explicit PhoenixControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init)
  {
    (void)_init;
  }

  explicit PhoenixControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _center_type =
    ros_phoenix::msg::MotorControl_<ContainerAllocator>;
  _center_type center;

  // setters for named parameter idiom
  Type & set__center(
    const ros_phoenix::msg::MotorControl_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_pubsub::msg::PhoenixControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_pubsub::msg::PhoenixControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::msg::PhoenixControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::msg::PhoenixControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_pubsub__msg__PhoenixControl
    std::shared_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_pubsub__msg__PhoenixControl
    std::shared_ptr<cpp_pubsub::msg::PhoenixControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PhoenixControl_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    return true;
  }
  bool operator!=(const PhoenixControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PhoenixControl_

// alias to use template instance with default allocator
using PhoenixControl =
  cpp_pubsub::msg::PhoenixControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__STRUCT_HPP_
