// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_phoenix:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_phoenix__msg__MotorControl __attribute__((deprecated))
#else
# define DEPRECATED__ros_phoenix__msg__MotorControl __declspec(deprecated)
#endif

namespace ros_phoenix
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorControl_
{
  using Type = MotorControl_<ContainerAllocator>;

  explicit MotorControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->mode = 0l;
      this->value = 0.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->mode = 0l;
      this->value = 0.0;
    }
  }

  explicit MotorControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->mode = 0l;
      this->value = 0.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->mode = 0l;
      this->value = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t PERCENT_OUTPUT =
    0;
  static constexpr int32_t POSITION =
    1;
  static constexpr int32_t VELOCITY =
    2;
  static constexpr int32_t CURRENT =
    3;
  static constexpr int32_t FOLLOWER =
    5;
  static constexpr int32_t MOTION_PROFILE =
    6;
  static constexpr int32_t MOTION_MAGIC =
    7;
  static constexpr int32_t MOTION_PROFILE_ARC =
    10;
  static constexpr int32_t DISABLED =
    15;

  // pointer types
  using RawPtr =
    ros_phoenix::msg::MotorControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_phoenix::msg::MotorControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_phoenix::msg::MotorControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_phoenix::msg::MotorControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_phoenix__msg__MotorControl
    std::shared_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_phoenix__msg__MotorControl
    std::shared_ptr<ros_phoenix::msg::MotorControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorControl_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorControl_

// alias to use template instance with default allocator
using MotorControl =
  ros_phoenix::msg::MotorControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::PERCENT_OUTPUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::FOLLOWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::MOTION_PROFILE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::MOTION_MAGIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::MOTION_PROFILE_ARC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MotorControl_<ContainerAllocator>::DISABLED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_phoenix

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_