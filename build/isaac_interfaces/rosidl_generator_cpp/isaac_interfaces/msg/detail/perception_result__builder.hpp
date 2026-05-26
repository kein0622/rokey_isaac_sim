// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__BUILDER_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/msg/detail/perception_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace msg
{

namespace builder
{

class Init_PerceptionResult_terrain_slope
{
public:
  explicit Init_PerceptionResult_terrain_slope(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::msg::PerceptionResult terrain_slope(::isaac_interfaces::msg::PerceptionResult::_terrain_slope_type arg)
  {
    msg_.terrain_slope = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_terrain_traversable
{
public:
  explicit Init_PerceptionResult_terrain_traversable(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_terrain_slope terrain_traversable(::isaac_interfaces::msg::PerceptionResult::_terrain_traversable_type arg)
  {
    msg_.terrain_traversable = std::move(arg);
    return Init_PerceptionResult_terrain_slope(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_obstacle_distance
{
public:
  explicit Init_PerceptionResult_obstacle_distance(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_terrain_traversable obstacle_distance(::isaac_interfaces::msg::PerceptionResult::_obstacle_distance_type arg)
  {
    msg_.obstacle_distance = std::move(arg);
    return Init_PerceptionResult_terrain_traversable(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_obstacle_detected
{
public:
  explicit Init_PerceptionResult_obstacle_detected(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_obstacle_distance obstacle_detected(::isaac_interfaces::msg::PerceptionResult::_obstacle_detected_type arg)
  {
    msg_.obstacle_detected = std::move(arg);
    return Init_PerceptionResult_obstacle_distance(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_z
{
public:
  explicit Init_PerceptionResult_z(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_obstacle_detected z(::isaac_interfaces::msg::PerceptionResult::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PerceptionResult_obstacle_detected(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_y
{
public:
  explicit Init_PerceptionResult_y(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_z y(::isaac_interfaces::msg::PerceptionResult::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PerceptionResult_z(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_x
{
public:
  explicit Init_PerceptionResult_x(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_y x(::isaac_interfaces::msg::PerceptionResult::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PerceptionResult_y(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_confidence
{
public:
  explicit Init_PerceptionResult_confidence(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_x confidence(::isaac_interfaces::msg::PerceptionResult::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_PerceptionResult_x(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_object_type
{
public:
  explicit Init_PerceptionResult_object_type(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_confidence object_type(::isaac_interfaces::msg::PerceptionResult::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_PerceptionResult_confidence(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_object_id
{
public:
  explicit Init_PerceptionResult_object_id(::isaac_interfaces::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_object_type object_id(::isaac_interfaces::msg::PerceptionResult::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_PerceptionResult_object_type(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_mineral_detected
{
public:
  Init_PerceptionResult_mineral_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionResult_object_id mineral_detected(::isaac_interfaces::msg::PerceptionResult::_mineral_detected_type arg)
  {
    msg_.mineral_detected = std::move(arg);
    return Init_PerceptionResult_object_id(msg_);
  }

private:
  ::isaac_interfaces::msg::PerceptionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::msg::PerceptionResult>()
{
  return isaac_interfaces::msg::builder::Init_PerceptionResult_mineral_detected();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__BUILDER_HPP_
