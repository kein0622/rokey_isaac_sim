// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_interfaces:srv/SaveExplorationMap.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__TRAITS_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_interfaces/srv/detail/save_exploration_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isaac_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveExplorationMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: target_path
  {
    out << "target_path: ";
    rosidl_generator_traits::value_to_yaml(msg.target_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveExplorationMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: target_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_path: ";
    rosidl_generator_traits::value_to_yaml(msg.target_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveExplorationMap_Request & msg, bool use_flow_style = false)
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
  const isaac_interfaces::srv::SaveExplorationMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::srv::SaveExplorationMap_Request & msg)
{
  return isaac_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::srv::SaveExplorationMap_Request>()
{
  return "isaac_interfaces::srv::SaveExplorationMap_Request";
}

template<>
inline const char * name<isaac_interfaces::srv::SaveExplorationMap_Request>()
{
  return "isaac_interfaces/srv/SaveExplorationMap_Request";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::SaveExplorationMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::srv::SaveExplorationMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::srv::SaveExplorationMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace isaac_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveExplorationMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: saved_path
  {
    out << "saved_path: ";
    rosidl_generator_traits::value_to_yaml(msg.saved_path, out);
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
  const SaveExplorationMap_Response & msg,
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

  // member: saved_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saved_path: ";
    rosidl_generator_traits::value_to_yaml(msg.saved_path, out);
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

inline std::string to_yaml(const SaveExplorationMap_Response & msg, bool use_flow_style = false)
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
  const isaac_interfaces::srv::SaveExplorationMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::srv::SaveExplorationMap_Response & msg)
{
  return isaac_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::srv::SaveExplorationMap_Response>()
{
  return "isaac_interfaces::srv::SaveExplorationMap_Response";
}

template<>
inline const char * name<isaac_interfaces::srv::SaveExplorationMap_Response>()
{
  return "isaac_interfaces/srv/SaveExplorationMap_Response";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::SaveExplorationMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::srv::SaveExplorationMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::srv::SaveExplorationMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<isaac_interfaces::srv::SaveExplorationMap>()
{
  return "isaac_interfaces::srv::SaveExplorationMap";
}

template<>
inline const char * name<isaac_interfaces::srv::SaveExplorationMap>()
{
  return "isaac_interfaces/srv/SaveExplorationMap";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::SaveExplorationMap>
  : std::integral_constant<
    bool,
    has_fixed_size<isaac_interfaces::srv::SaveExplorationMap_Request>::value &&
    has_fixed_size<isaac_interfaces::srv::SaveExplorationMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<isaac_interfaces::srv::SaveExplorationMap>
  : std::integral_constant<
    bool,
    has_bounded_size<isaac_interfaces::srv::SaveExplorationMap_Request>::value &&
    has_bounded_size<isaac_interfaces::srv::SaveExplorationMap_Response>::value
  >
{
};

template<>
struct is_service<isaac_interfaces::srv::SaveExplorationMap>
  : std::true_type
{
};

template<>
struct is_service_request<isaac_interfaces::srv::SaveExplorationMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<isaac_interfaces::srv::SaveExplorationMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__TRAITS_HPP_
