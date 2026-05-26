// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isaac_interfaces:srv/CheckSystemReady.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__STRUCT_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Request __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Request __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckSystemReady_Request_
{
  using Type = CheckSystemReady_Request_<ContainerAllocator>;

  explicit CheckSystemReady_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
    }
  }

  explicit CheckSystemReady_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
    }
  }

  // field types and members
  using _requester_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requester_type requester;

  // setters for named parameter idiom
  Type & set__requester(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->requester = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Request
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Request
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckSystemReady_Request_ & other) const
  {
    if (this->requester != other.requester) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckSystemReady_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckSystemReady_Request_

// alias to use template instance with default allocator
using CheckSystemReady_Request =
  isaac_interfaces::srv::CheckSystemReady_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace isaac_interfaces


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Response __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Response __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckSystemReady_Response_
{
  using Type = CheckSystemReady_Response_<ContainerAllocator>;

  explicit CheckSystemReady_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
      this->message = "";
    }
  }

  explicit CheckSystemReady_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
      this->message = "";
    }
  }

  // field types and members
  using _ready_type =
    bool;
  _ready_type ready;
  using _missing_nodes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _missing_nodes_type missing_nodes;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__missing_nodes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->missing_nodes = _arg;
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
    isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Response
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__srv__CheckSystemReady_Response
    std::shared_ptr<isaac_interfaces::srv::CheckSystemReady_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckSystemReady_Response_ & other) const
  {
    if (this->ready != other.ready) {
      return false;
    }
    if (this->missing_nodes != other.missing_nodes) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckSystemReady_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckSystemReady_Response_

// alias to use template instance with default allocator
using CheckSystemReady_Response =
  isaac_interfaces::srv::CheckSystemReady_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace isaac_interfaces

namespace isaac_interfaces
{

namespace srv
{

struct CheckSystemReady
{
  using Request = isaac_interfaces::srv::CheckSystemReady_Request;
  using Response = isaac_interfaces::srv::CheckSystemReady_Response;
};

}  // namespace srv

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__STRUCT_HPP_
