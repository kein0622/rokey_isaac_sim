// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isaac_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__srv__ResetSimulation_Request __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__srv__ResetSimulation_Request __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetSimulation_Request_
{
  using Type = ResetSimulation_Request_<ContainerAllocator>;

  explicit ResetSimulation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_world = false;
      this->reset_robot = false;
      this->reset_mission = false;
      this->reason = "";
    }
  }

  explicit ResetSimulation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_world = false;
      this->reset_robot = false;
      this->reset_mission = false;
      this->reason = "";
    }
  }

  // field types and members
  using _reset_world_type =
    bool;
  _reset_world_type reset_world;
  using _reset_robot_type =
    bool;
  _reset_robot_type reset_robot;
  using _reset_mission_type =
    bool;
  _reset_mission_type reset_mission;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__reset_world(
    const bool & _arg)
  {
    this->reset_world = _arg;
    return *this;
  }
  Type & set__reset_robot(
    const bool & _arg)
  {
    this->reset_robot = _arg;
    return *this;
  }
  Type & set__reset_mission(
    const bool & _arg)
  {
    this->reset_mission = _arg;
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
    isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__srv__ResetSimulation_Request
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__srv__ResetSimulation_Request
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetSimulation_Request_ & other) const
  {
    if (this->reset_world != other.reset_world) {
      return false;
    }
    if (this->reset_robot != other.reset_robot) {
      return false;
    }
    if (this->reset_mission != other.reset_mission) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetSimulation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetSimulation_Request_

// alias to use template instance with default allocator
using ResetSimulation_Request =
  isaac_interfaces::srv::ResetSimulation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace isaac_interfaces


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__srv__ResetSimulation_Response __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__srv__ResetSimulation_Response __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetSimulation_Response_
{
  using Type = ResetSimulation_Response_<ContainerAllocator>;

  explicit ResetSimulation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ResetSimulation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__srv__ResetSimulation_Response
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__srv__ResetSimulation_Response
    std::shared_ptr<isaac_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetSimulation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetSimulation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetSimulation_Response_

// alias to use template instance with default allocator
using ResetSimulation_Response =
  isaac_interfaces::srv::ResetSimulation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace isaac_interfaces

namespace isaac_interfaces
{

namespace srv
{

struct ResetSimulation
{
  using Request = isaac_interfaces::srv::ResetSimulation_Request;
  using Response = isaac_interfaces::srv::ResetSimulation_Response;
};

}  // namespace srv

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_HPP_
