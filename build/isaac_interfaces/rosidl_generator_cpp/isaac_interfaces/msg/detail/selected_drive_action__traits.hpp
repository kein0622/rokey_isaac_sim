// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_interfaces:msg/SelectedDriveAction.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__TRAITS_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_interfaces/msg/detail/selected_drive_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isaac_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SelectedDriveAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: target_yaw
  {
    out << "target_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.target_yaw, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SelectedDriveAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: target_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.target_yaw, out);
    out << "\n";
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
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

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelectedDriveAction & msg, bool use_flow_style = false)
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
  const isaac_interfaces::msg::SelectedDriveAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::msg::SelectedDriveAction & msg)
{
  return isaac_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::msg::SelectedDriveAction>()
{
  return "isaac_interfaces::msg::SelectedDriveAction";
}

template<>
inline const char * name<isaac_interfaces::msg::SelectedDriveAction>()
{
  return "isaac_interfaces/msg/SelectedDriveAction";
}

template<>
struct has_fixed_size<isaac_interfaces::msg::SelectedDriveAction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::msg::SelectedDriveAction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::msg::SelectedDriveAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__TRAITS_HPP_
