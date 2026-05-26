// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__BUILDER_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/srv/detail/reset_simulation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetSimulation_Request_reason
{
public:
  explicit Init_ResetSimulation_Request_reason(::isaac_interfaces::srv::ResetSimulation_Request & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::srv::ResetSimulation_Request reason(::isaac_interfaces::srv::ResetSimulation_Request::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::srv::ResetSimulation_Request msg_;
};

class Init_ResetSimulation_Request_reset_mission
{
public:
  explicit Init_ResetSimulation_Request_reset_mission(::isaac_interfaces::srv::ResetSimulation_Request & msg)
  : msg_(msg)
  {}
  Init_ResetSimulation_Request_reason reset_mission(::isaac_interfaces::srv::ResetSimulation_Request::_reset_mission_type arg)
  {
    msg_.reset_mission = std::move(arg);
    return Init_ResetSimulation_Request_reason(msg_);
  }

private:
  ::isaac_interfaces::srv::ResetSimulation_Request msg_;
};

class Init_ResetSimulation_Request_reset_robot
{
public:
  explicit Init_ResetSimulation_Request_reset_robot(::isaac_interfaces::srv::ResetSimulation_Request & msg)
  : msg_(msg)
  {}
  Init_ResetSimulation_Request_reset_mission reset_robot(::isaac_interfaces::srv::ResetSimulation_Request::_reset_robot_type arg)
  {
    msg_.reset_robot = std::move(arg);
    return Init_ResetSimulation_Request_reset_mission(msg_);
  }

private:
  ::isaac_interfaces::srv::ResetSimulation_Request msg_;
};

class Init_ResetSimulation_Request_reset_world
{
public:
  Init_ResetSimulation_Request_reset_world()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetSimulation_Request_reset_robot reset_world(::isaac_interfaces::srv::ResetSimulation_Request::_reset_world_type arg)
  {
    msg_.reset_world = std::move(arg);
    return Init_ResetSimulation_Request_reset_robot(msg_);
  }

private:
  ::isaac_interfaces::srv::ResetSimulation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::srv::ResetSimulation_Request>()
{
  return isaac_interfaces::srv::builder::Init_ResetSimulation_Request_reset_world();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetSimulation_Response_message
{
public:
  explicit Init_ResetSimulation_Response_message(::isaac_interfaces::srv::ResetSimulation_Response & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::srv::ResetSimulation_Response message(::isaac_interfaces::srv::ResetSimulation_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::srv::ResetSimulation_Response msg_;
};

class Init_ResetSimulation_Response_success
{
public:
  Init_ResetSimulation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetSimulation_Response_message success(::isaac_interfaces::srv::ResetSimulation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ResetSimulation_Response_message(msg_);
  }

private:
  ::isaac_interfaces::srv::ResetSimulation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::srv::ResetSimulation_Response>()
{
  return isaac_interfaces::srv::builder::Init_ResetSimulation_Response_success();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__BUILDER_HPP_
