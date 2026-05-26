// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__TRAITS_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_interfaces/msg/detail/perception_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isaac_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: mineral_detected
  {
    out << "mineral_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.mineral_detected, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: object_type
  {
    out << "object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.object_type, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: obstacle_detected
  {
    out << "obstacle_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_detected, out);
    out << ", ";
  }

  // member: obstacle_distance
  {
    out << "obstacle_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_distance, out);
    out << ", ";
  }

  // member: terrain_traversable
  {
    out << "terrain_traversable: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_traversable, out);
    out << ", ";
  }

  // member: terrain_slope
  {
    out << "terrain_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_slope, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mineral_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mineral_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.mineral_detected, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: object_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.object_type, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: obstacle_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_detected, out);
    out << "\n";
  }

  // member: obstacle_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_distance, out);
    out << "\n";
  }

  // member: terrain_traversable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_traversable: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_traversable, out);
    out << "\n";
  }

  // member: terrain_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_slope, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionResult & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace isaac_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_interfaces::msg::PerceptionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::msg::PerceptionResult & msg)
{
  return isaac_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::msg::PerceptionResult>()
{
  return "isaac_interfaces::msg::PerceptionResult";
}

template<>
inline const char * name<isaac_interfaces::msg::PerceptionResult>()
{
  return "isaac_interfaces/msg/PerceptionResult";
}

template<>
struct has_fixed_size<isaac_interfaces::msg::PerceptionResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::msg::PerceptionResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::msg::PerceptionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__TRAITS_HPP_
