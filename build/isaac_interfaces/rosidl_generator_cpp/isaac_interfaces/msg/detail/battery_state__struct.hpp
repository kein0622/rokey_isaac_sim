// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isaac_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__msg__BatteryState __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__msg__BatteryState __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryState_
{
  using Type = BatteryState_<ContainerAllocator>;

  explicit BatteryState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0.0f;
      this->is_charging = false;
      this->is_low = false;
      this->is_critical = false;
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->source = "";
    }
  }

  explicit BatteryState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0.0f;
      this->is_charging = false;
      this->is_low = false;
      this->is_critical = false;
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->source = "";
    }
  }

  // field types and members
  using _percentage_type =
    float;
  _percentage_type percentage;
  using _is_charging_type =
    bool;
  _is_charging_type is_charging;
  using _is_low_type =
    bool;
  _is_low_type is_low;
  using _is_critical_type =
    bool;
  _is_critical_type is_critical;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _current_type =
    float;
  _current_type current;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;

  // setters for named parameter idiom
  Type & set__percentage(
    const float & _arg)
  {
    this->percentage = _arg;
    return *this;
  }
  Type & set__is_charging(
    const bool & _arg)
  {
    this->is_charging = _arg;
    return *this;
  }
  Type & set__is_low(
    const bool & _arg)
  {
    this->is_low = _arg;
    return *this;
  }
  Type & set__is_critical(
    const bool & _arg)
  {
    this->is_critical = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isaac_interfaces::msg::BatteryState_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::msg::BatteryState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::BatteryState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::BatteryState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__msg__BatteryState
    std::shared_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__msg__BatteryState
    std::shared_ptr<isaac_interfaces::msg::BatteryState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryState_ & other) const
  {
    if (this->percentage != other.percentage) {
      return false;
    }
    if (this->is_charging != other.is_charging) {
      return false;
    }
    if (this->is_low != other.is_low) {
      return false;
    }
    if (this->is_critical != other.is_critical) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryState_

// alias to use template instance with default allocator
using BatteryState =
  isaac_interfaces::msg::BatteryState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
