// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__TRAITS_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_interfaces/srv/detail/reset_simulation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isaac_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetSimulation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: reset_world
  {
    out << "reset_world: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_world, out);
    out << ", ";
  }

  // member: reset_robot
  {
    out << "reset_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_robot, out);
    out << ", ";
  }

  // member: reset_mission
  {
    out << "reset_mission: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_mission, out);
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
  const ResetSimulation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reset_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_world: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_world, out);
    out << "\n";
  }

  // member: reset_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_robot, out);
    out << "\n";
  }

  // member: reset_mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_mission: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_mission, out);
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

inline std::string to_yaml(const ResetSimulation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace isaac_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_interfaces::srv::ResetSimulation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::srv::ResetSimulation_Request & msg)
{
  return isaac_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::srv::ResetSimulation_Request>()
{
  return "isaac_interfaces::srv::ResetSimulation_Request";
}

template<>
inline const char * name<isaac_interfaces::srv::ResetSimulation_Request>()
{
  return "isaac_interfaces/srv/ResetSimulation_Request";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::ResetSimulation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::srv::ResetSimulation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::srv::ResetSimulation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace isaac_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetSimulation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetSimulation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetSimulation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace isaac_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_interfaces::srv::ResetSimulation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::srv::ResetSimulation_Response & msg)
{
  return isaac_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::srv::ResetSimulation_Response>()
{
  return "isaac_interfaces::srv::ResetSimulation_Response";
}

template<>
inline const char * name<isaac_interfaces::srv::ResetSimulation_Response>()
{
  return "isaac_interfaces/srv/ResetSimulation_Response";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::ResetSimulation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::srv::ResetSimulation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::srv::ResetSimulation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<isaac_interfaces::srv::ResetSimulation>()
{
  return "isaac_interfaces::srv::ResetSimulation";
}

template<>
inline const char * name<isaac_interfaces::srv::ResetSimulation>()
{
  return "isaac_interfaces/srv/ResetSimulation";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::ResetSimulation>
  : std::integral_constant<
    bool,
    has_fixed_size<isaac_interfaces::srv::ResetSimulation_Request>::value &&
    has_fixed_size<isaac_interfaces::srv::ResetSimulation_Response>::value
  >
{
};

template<>
struct has_bounded_size<isaac_interfaces::srv::ResetSimulation>
  : std::integral_constant<
    bool,
    has_bounded_size<isaac_interfaces::srv::ResetSimulation_Request>::value &&
    has_bounded_size<isaac_interfaces::srv::ResetSimulation_Response>::value
  >
{
};

template<>
struct is_service<isaac_interfaces::srv::ResetSimulation>
  : std::true_type
{
};

template<>
struct is_service_request<isaac_interfaces::srv::ResetSimulation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<isaac_interfaces::srv::ResetSimulation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__TRAITS_HPP_
