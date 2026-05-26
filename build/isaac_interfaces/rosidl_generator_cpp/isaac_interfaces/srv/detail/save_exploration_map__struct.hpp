// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isaac_interfaces:srv/SaveExplorationMap.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__STRUCT_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Request __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveExplorationMap_Request_
{
  using Type = SaveExplorationMap_Request_<ContainerAllocator>;

  explicit SaveExplorationMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->target_path = "";
    }
  }

  explicit SaveExplorationMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_name(_alloc),
    target_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->target_path = "";
    }
  }

  // field types and members
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _target_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_path_type target_path;

  // setters for named parameter idiom
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__target_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Request
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Request
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveExplorationMap_Request_ & other) const
  {
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->target_path != other.target_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveExplorationMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveExplorationMap_Request_

// alias to use template instance with default allocator
using SaveExplorationMap_Request =
  isaac_interfaces::srv::SaveExplorationMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace isaac_interfaces


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Response __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveExplorationMap_Response_
{
  using Type = SaveExplorationMap_Response_<ContainerAllocator>;

  explicit SaveExplorationMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->saved_path = "";
      this->message = "";
    }
  }

  explicit SaveExplorationMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : saved_path(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->saved_path = "";
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _saved_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _saved_path_type saved_path;
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
  Type & set__saved_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->saved_path = _arg;
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
    isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Response
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__srv__SaveExplorationMap_Response
    std::shared_ptr<isaac_interfaces::srv::SaveExplorationMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveExplorationMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->saved_path != other.saved_path) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveExplorationMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveExplorationMap_Response_

// alias to use template instance with default allocator
using SaveExplorationMap_Response =
  isaac_interfaces::srv::SaveExplorationMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace isaac_interfaces

namespace isaac_interfaces
{

namespace srv
{

struct SaveExplorationMap
{
  using Request = isaac_interfaces::srv::SaveExplorationMap_Request;
  using Response = isaac_interfaces::srv::SaveExplorationMap_Response;
};

}  // namespace srv

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__STRUCT_HPP_
