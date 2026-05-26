// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isaac_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__msg__MissionState __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__msg__MissionState __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionState_
{
  using Type = MissionState_<ContainerAllocator>;

  explicit MissionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->previous_state = "";
      this->battery_percent = 0.0f;
      this->low_battery = false;
      this->critical_battery = false;
      this->cargo_count = 0l;
      this->cargo_capacity = 0l;
      this->collected_count = 0l;
      this->collection_goal = 0l;
      this->active_task = "";
      this->last_error = "";
    }
  }

  explicit MissionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc),
    previous_state(_alloc),
    active_task(_alloc),
    last_error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->previous_state = "";
      this->battery_percent = 0.0f;
      this->low_battery = false;
      this->critical_battery = false;
      this->cargo_count = 0l;
      this->cargo_capacity = 0l;
      this->collected_count = 0l;
      this->collection_goal = 0l;
      this->active_task = "";
      this->last_error = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _previous_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _previous_state_type previous_state;
  using _battery_percent_type =
    float;
  _battery_percent_type battery_percent;
  using _low_battery_type =
    bool;
  _low_battery_type low_battery;
  using _critical_battery_type =
    bool;
  _critical_battery_type critical_battery;
  using _cargo_count_type =
    int32_t;
  _cargo_count_type cargo_count;
  using _cargo_capacity_type =
    int32_t;
  _cargo_capacity_type cargo_capacity;
  using _collected_count_type =
    int32_t;
  _collected_count_type collected_count;
  using _collection_goal_type =
    int32_t;
  _collection_goal_type collection_goal;
  using _active_task_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _active_task_type active_task;
  using _last_error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_error_type last_error;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__previous_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->previous_state = _arg;
    return *this;
  }
  Type & set__battery_percent(
    const float & _arg)
  {
    this->battery_percent = _arg;
    return *this;
  }
  Type & set__low_battery(
    const bool & _arg)
  {
    this->low_battery = _arg;
    return *this;
  }
  Type & set__critical_battery(
    const bool & _arg)
  {
    this->critical_battery = _arg;
    return *this;
  }
  Type & set__cargo_count(
    const int32_t & _arg)
  {
    this->cargo_count = _arg;
    return *this;
  }
  Type & set__cargo_capacity(
    const int32_t & _arg)
  {
    this->cargo_capacity = _arg;
    return *this;
  }
  Type & set__collected_count(
    const int32_t & _arg)
  {
    this->collected_count = _arg;
    return *this;
  }
  Type & set__collection_goal(
    const int32_t & _arg)
  {
    this->collection_goal = _arg;
    return *this;
  }
  Type & set__active_task(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->active_task = _arg;
    return *this;
  }
  Type & set__last_error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isaac_interfaces::msg::MissionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::msg::MissionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::MissionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::MissionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__msg__MissionState
    std::shared_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__msg__MissionState
    std::shared_ptr<isaac_interfaces::msg::MissionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->previous_state != other.previous_state) {
      return false;
    }
    if (this->battery_percent != other.battery_percent) {
      return false;
    }
    if (this->low_battery != other.low_battery) {
      return false;
    }
    if (this->critical_battery != other.critical_battery) {
      return false;
    }
    if (this->cargo_count != other.cargo_count) {
      return false;
    }
    if (this->cargo_capacity != other.cargo_capacity) {
      return false;
    }
    if (this->collected_count != other.collected_count) {
      return false;
    }
    if (this->collection_goal != other.collection_goal) {
      return false;
    }
    if (this->active_task != other.active_task) {
      return false;
    }
    if (this->last_error != other.last_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionState_

// alias to use template instance with default allocator
using MissionState =
  isaac_interfaces::msg::MissionState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
