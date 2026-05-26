// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isaac_interfaces__msg__PerceptionResult __attribute__((deprecated))
#else
# define DEPRECATED__isaac_interfaces__msg__PerceptionResult __declspec(deprecated)
#endif

namespace isaac_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionResult_
{
  using Type = PerceptionResult_<ContainerAllocator>;

  explicit PerceptionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mineral_detected = false;
      this->object_id = "";
      this->object_type = "";
      this->confidence = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->obstacle_detected = false;
      this->obstacle_distance = 0.0f;
      this->terrain_traversable = false;
      this->terrain_slope = 0.0f;
    }
  }

  explicit PerceptionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc),
    object_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mineral_detected = false;
      this->object_id = "";
      this->object_type = "";
      this->confidence = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->obstacle_detected = false;
      this->obstacle_distance = 0.0f;
      this->terrain_traversable = false;
      this->terrain_slope = 0.0f;
    }
  }

  // field types and members
  using _mineral_detected_type =
    bool;
  _mineral_detected_type mineral_detected;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _object_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_type_type object_type;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _obstacle_detected_type =
    bool;
  _obstacle_detected_type obstacle_detected;
  using _obstacle_distance_type =
    float;
  _obstacle_distance_type obstacle_distance;
  using _terrain_traversable_type =
    bool;
  _terrain_traversable_type terrain_traversable;
  using _terrain_slope_type =
    float;
  _terrain_slope_type terrain_slope;

  // setters for named parameter idiom
  Type & set__mineral_detected(
    const bool & _arg)
  {
    this->mineral_detected = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__object_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__obstacle_detected(
    const bool & _arg)
  {
    this->obstacle_detected = _arg;
    return *this;
  }
  Type & set__obstacle_distance(
    const float & _arg)
  {
    this->obstacle_distance = _arg;
    return *this;
  }
  Type & set__terrain_traversable(
    const bool & _arg)
  {
    this->terrain_traversable = _arg;
    return *this;
  }
  Type & set__terrain_slope(
    const float & _arg)
  {
    this->terrain_slope = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isaac_interfaces::msg::PerceptionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const isaac_interfaces::msg::PerceptionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::PerceptionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isaac_interfaces::msg::PerceptionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isaac_interfaces__msg__PerceptionResult
    std::shared_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isaac_interfaces__msg__PerceptionResult
    std::shared_ptr<isaac_interfaces::msg::PerceptionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionResult_ & other) const
  {
    if (this->mineral_detected != other.mineral_detected) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->obstacle_detected != other.obstacle_detected) {
      return false;
    }
    if (this->obstacle_distance != other.obstacle_distance) {
      return false;
    }
    if (this->terrain_traversable != other.terrain_traversable) {
      return false;
    }
    if (this->terrain_slope != other.terrain_slope) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionResult_

// alias to use template instance with default allocator
using PerceptionResult =
  isaac_interfaces::msg::PerceptionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_HPP_
