// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isaac_interfaces:msg/SelectedDriveAction.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__STRUCT_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__msg__SelectedDriveAction __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__msg__SelectedDriveAction __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SelectedDriveAction_
{
  using Type = SelectedDriveAction_<ContainerAllocator>;

  explicit SelectedDriveAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->target_x = 0.0f;
      this->target_y = 0.0f;
      this->target_yaw = 0.0f;
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->confidence = 0.0f;
      this->reason = "";
    }
  }

  explicit SelectedDriveAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->target_x = 0.0f;
      this->target_y = 0.0f;
      this->target_yaw = 0.0f;
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->confidence = 0.0f;
      this->reason = "";
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type action;
  using _target_x_type =
    float;
  _target_x_type target_x;
  using _target_y_type =
    float;
  _target_y_type target_y;
  using _target_yaw_type =
    float;
  _target_yaw_type target_yaw;
  using _linear_velocity_type =
    float;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__target_x(
    const float & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const float & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__target_yaw(
    const float & _arg)
  {
    this->target_yaw = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const float & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__msg__SelectedDriveAction
    std::shared_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__msg__SelectedDriveAction
    std::shared_ptr<isaac_interfaces::msg::SelectedDriveAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectedDriveAction_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->target_yaw != other.target_yaw) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectedDriveAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectedDriveAction_

// alias to use template instance with default allocator
using SelectedDriveAction =
  isaac_interfaces::msg::SelectedDriveAction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__STRUCT_HPP_
