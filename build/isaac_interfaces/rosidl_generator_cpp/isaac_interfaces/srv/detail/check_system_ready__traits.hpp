// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_interfaces:srv/CheckSystemReady.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__TRAITS_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_interfaces/srv/detail/check_system_ready__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isaac_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckSystemReady_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: requester
  {
    out << "requester: ";
    rosidl_generator_traits::value_to_yaml(msg.requester, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckSystemReady_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requester
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requester: ";
    rosidl_generator_traits::value_to_yaml(msg.requester, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckSystemReady_Request & msg, bool use_flow_style = false)
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
  const isaac_interfaces::srv::CheckSystemReady_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::srv::CheckSystemReady_Request & msg)
{
  return isaac_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::srv::CheckSystemReady_Request>()
{
  return "isaac_interfaces::srv::CheckSystemReady_Request";
}

template<>
inline const char * name<isaac_interfaces::srv::CheckSystemReady_Request>()
{
  return "isaac_interfaces/srv/CheckSystemReady_Request";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::CheckSystemReady_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::srv::CheckSystemReady_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::srv::CheckSystemReady_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace isaac_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckSystemReady_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << ", ";
  }

  // member: missing_nodes
  {
    if (msg.missing_nodes.size() == 0) {
      out << "missing_nodes: []";
    } else {
      out << "missing_nodes: [";
      size_t pending_items = msg.missing_nodes.size();
      for (auto item : msg.missing_nodes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const CheckSystemReady_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: missing_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missing_nodes.size() == 0) {
      out << "missing_nodes: []\n";
    } else {
      out << "missing_nodes:\n";
      for (auto item : msg.missing_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const CheckSystemReady_Response & msg, bool use_flow_style = false)
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
  const isaac_interfaces::srv::CheckSystemReady_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const isaac_interfaces::srv::CheckSystemReady_Response & msg)
{
  return isaac_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_interfaces::srv::CheckSystemReady_Response>()
{
  return "isaac_interfaces::srv::CheckSystemReady_Response";
}

template<>
inline const char * name<isaac_interfaces::srv::CheckSystemReady_Response>()
{
  return "isaac_interfaces/srv/CheckSystemReady_Response";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::CheckSystemReady_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_interfaces::srv::CheckSystemReady_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_interfaces::srv::CheckSystemReady_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<isaac_interfaces::srv::CheckSystemReady>()
{
  return "isaac_interfaces::srv::CheckSystemReady";
}

template<>
inline const char * name<isaac_interfaces::srv::CheckSystemReady>()
{
  return "isaac_interfaces/srv/CheckSystemReady";
}

template<>
struct has_fixed_size<isaac_interfaces::srv::CheckSystemReady>
  : std::integral_constant<
    bool,
    has_fixed_size<isaac_interfaces::srv::CheckSystemReady_Request>::value &&
    has_fixed_size<isaac_interfaces::srv::CheckSystemReady_Response>::value
  >
{
};

template<>
struct has_bounded_size<isaac_interfaces::srv::CheckSystemReady>
  : std::integral_constant<
    bool,
    has_bounded_size<isaac_interfaces::srv::CheckSystemReady_Request>::value &&
    has_bounded_size<isaac_interfaces::srv::CheckSystemReady_Response>::value
  >
{
};

template<>
struct is_service<isaac_interfaces::srv::CheckSystemReady>
  : std::true_type
{
};

template<>
struct is_service_request<isaac_interfaces::srv::CheckSystemReady_Request>
  : std::true_type
{
};

template<>
struct is_service_response<isaac_interfaces::srv::CheckSystemReady_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__TRAITS_HPP_
