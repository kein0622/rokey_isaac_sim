// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:srv/CheckSystemReady.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__BUILDER_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/srv/detail/check_system_ready__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckSystemReady_Request_requester
{
public:
  Init_CheckSystemReady_Request_requester()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::isaac_interfaces::srv::CheckSystemReady_Request requester(::isaac_interfaces::srv::CheckSystemReady_Request::_requester_type arg)
  {
    msg_.requester = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::srv::CheckSystemReady_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::srv::CheckSystemReady_Request>()
{
  return isaac_interfaces::srv::builder::Init_CheckSystemReady_Request_requester();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckSystemReady_Response_message
{
public:
  explicit Init_CheckSystemReady_Response_message(::isaac_interfaces::srv::CheckSystemReady_Response & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::srv::CheckSystemReady_Response message(::isaac_interfaces::srv::CheckSystemReady_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::srv::CheckSystemReady_Response msg_;
};

class Init_CheckSystemReady_Response_missing_nodes
{
public:
  explicit Init_CheckSystemReady_Response_missing_nodes(::isaac_interfaces::srv::CheckSystemReady_Response & msg)
  : msg_(msg)
  {}
  Init_CheckSystemReady_Response_message missing_nodes(::isaac_interfaces::srv::CheckSystemReady_Response::_missing_nodes_type arg)
  {
    msg_.missing_nodes = std::move(arg);
    return Init_CheckSystemReady_Response_message(msg_);
  }

private:
  ::isaac_interfaces::srv::CheckSystemReady_Response msg_;
};

class Init_CheckSystemReady_Response_ready
{
public:
  Init_CheckSystemReady_Response_ready()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckSystemReady_Response_missing_nodes ready(::isaac_interfaces::srv::CheckSystemReady_Response::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_CheckSystemReady_Response_missing_nodes(msg_);
  }

private:
  ::isaac_interfaces::srv::CheckSystemReady_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::srv::CheckSystemReady_Response>()
{
  return isaac_interfaces::srv::builder::Init_CheckSystemReady_Response_ready();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__BUILDER_HPP_
