// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_phoenix:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_phoenix__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__ros_phoenix__msg__MotorStatus __declspec(deprecated)
#endif

namespace ros_phoenix
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->bus_voltage = 0.0;
      this->output_percent = 0.0;
      this->output_voltage = 0.0;
      this->output_current = 0.0;
      this->position = 0.0;
      this->velocity = 0.0;
      this->fwd_limit = false;
      this->rev_limit = false;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->bus_voltage = 0.0;
      this->output_percent = 0.0;
      this->output_voltage = 0.0;
      this->output_current = 0.0;
      this->position = 0.0;
      this->velocity = 0.0;
      this->fwd_limit = false;
      this->rev_limit = false;
    }
  }

  // field types and members
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _bus_voltage_type =
    double;
  _bus_voltage_type bus_voltage;
  using _output_percent_type =
    double;
  _output_percent_type output_percent;
  using _output_voltage_type =
    double;
  _output_voltage_type output_voltage;
  using _output_current_type =
    double;
  _output_current_type output_current;
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _fwd_limit_type =
    bool;
  _fwd_limit_type fwd_limit;
  using _rev_limit_type =
    bool;
  _rev_limit_type rev_limit;

  // setters for named parameter idiom
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__bus_voltage(
    const double & _arg)
  {
    this->bus_voltage = _arg;
    return *this;
  }
  Type & set__output_percent(
    const double & _arg)
  {
    this->output_percent = _arg;
    return *this;
  }
  Type & set__output_voltage(
    const double & _arg)
  {
    this->output_voltage = _arg;
    return *this;
  }
  Type & set__output_current(
    const double & _arg)
  {
    this->output_current = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__fwd_limit(
    const bool & _arg)
  {
    this->fwd_limit = _arg;
    return *this;
  }
  Type & set__rev_limit(
    const bool & _arg)
  {
    this->rev_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_phoenix::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_phoenix::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_phoenix::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_phoenix::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_phoenix__msg__MotorStatus
    std::shared_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_phoenix__msg__MotorStatus
    std::shared_ptr<ros_phoenix::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->bus_voltage != other.bus_voltage) {
      return false;
    }
    if (this->output_percent != other.output_percent) {
      return false;
    }
    if (this->output_voltage != other.output_voltage) {
      return false;
    }
    if (this->output_current != other.output_current) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->fwd_limit != other.fwd_limit) {
      return false;
    }
    if (this->rev_limit != other.rev_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  ros_phoenix::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_phoenix

#endif  // ROS_PHOENIX__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
