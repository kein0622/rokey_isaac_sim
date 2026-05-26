// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_interfaces/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isaac_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryState & msg,
  std::ostream & out)
{
  out << "{";
  // member: percentage
  {
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
    out << ", ";
  }

  // member: is_charging
  {
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << ", ";
  }

  // member: is_low
  {
    out << "is_low: ";
    rosidl_generator_traits::value_to_yaml(msg.is_low, out);
    out << ", ";
  }

  // member: is_critical
  {
    out << "is_critical: ";
    rosidl_generator_traits::value_to_yaml(msg.is_critical, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
    out << "\n";
  }

  // member: is_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << "\n";
  }

  // member: is_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_low: ";
    rosidl_generator_traits::value_to_yaml(msg.is_low, out);
    out << "\n";
  }

  // member: is_critical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_critical: ";
    rosidl_generator_traits::value_to_yaml(msg.is_critical, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryState & msg, bool use_flow_style = false)
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
  const isaac_interfaces::msg::BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::msg::BatteryState & msg)
{
  return isaac_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::msg::BatteryState>()
{
  return "isaac_interfaces::msg::BatteryState";
}

template<>
inline const char * name<isaac_interfaces::msg::BatteryState>()
{
  return "isaac_interfaces/msg/BatteryState";
}

template<>
struct has_fixed_size<isaac_interfaces::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
