// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_interfaces/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isaac_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: previous_state
  {
    out << "previous_state: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_state, out);
    out << ", ";
  }

  // member: battery_percent
  {
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << ", ";
  }

  // member: low_battery
  {
    out << "low_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.low_battery, out);
    out << ", ";
  }

  // member: critical_battery
  {
    out << "critical_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_battery, out);
    out << ", ";
  }

  // member: cargo_count
  {
    out << "cargo_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cargo_count, out);
    out << ", ";
  }

  // member: cargo_capacity
  {
    out << "cargo_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.cargo_capacity, out);
    out << ", ";
  }

  // member: collected_count
  {
    out << "collected_count: ";
    rosidl_generator_traits::value_to_yaml(msg.collected_count, out);
    out << ", ";
  }

  // member: collection_goal
  {
    out << "collection_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.collection_goal, out);
    out << ", ";
  }

  // member: active_task
  {
    out << "active_task: ";
    rosidl_generator_traits::value_to_yaml(msg.active_task, out);
    out << ", ";
  }

  // member: last_error
  {
    out << "last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: previous_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_state: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_state, out);
    out << "\n";
  }

  // member: battery_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << "\n";
  }

  // member: low_battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.low_battery, out);
    out << "\n";
  }

  // member: critical_battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "critical_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_battery, out);
    out << "\n";
  }

  // member: cargo_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cargo_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cargo_count, out);
    out << "\n";
  }

  // member: cargo_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cargo_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.cargo_capacity, out);
    out << "\n";
  }

  // member: collected_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collected_count: ";
    rosidl_generator_traits::value_to_yaml(msg.collected_count, out);
    out << "\n";
  }

  // member: collection_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collection_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.collection_goal, out);
    out << "\n";
  }

  // member: active_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_task: ";
    rosidl_generator_traits::value_to_yaml(msg.active_task, out);
    out << "\n";
  }

  // member: last_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionState & msg, bool use_flow_style = false)
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
  const isaac_interfaces::msg::MissionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::msg::MissionState & msg)
{
  return isaac_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::msg::MissionState>()
{
  return "isaac_interfaces::msg::MissionState";
}

template<>
inline const char * name<isaac_interfaces::msg::MissionState>()
{
  return "isaac_interfaces/msg/MissionState";
}

template<>
struct has_fixed_size<isaac_interfaces::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::msg::MissionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
