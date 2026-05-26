// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:srv/SaveExplorationMap.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__BUILDER_HPP_
#define ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/srv/detail/save_exploration_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaveExplorationMap_Request_target_path
{
public:
  explicit Init_SaveExplorationMap_Request_target_path(::isaac_interfaces::srv::SaveExplorationMap_Request & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::srv::SaveExplorationMap_Request target_path(::isaac_interfaces::srv::SaveExplorationMap_Request::_target_path_type arg)
  {
    msg_.target_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::srv::SaveExplorationMap_Request msg_;
};

class Init_SaveExplorationMap_Request_map_name
{
public:
  Init_SaveExplorationMap_Request_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveExplorationMap_Request_target_path map_name(::isaac_interfaces::srv::SaveExplorationMap_Request::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_SaveExplorationMap_Request_target_path(msg_);
  }

private:
  ::isaac_interfaces::srv::SaveExplorationMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::srv::SaveExplorationMap_Request>()
{
  return isaac_interfaces::srv::builder::Init_SaveExplorationMap_Request_map_name();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaveExplorationMap_Response_message
{
public:
  explicit Init_SaveExplorationMap_Response_message(::isaac_interfaces::srv::SaveExplorationMap_Response & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::srv::SaveExplorationMap_Response message(::isaac_interfaces::srv::SaveExplorationMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::srv::SaveExplorationMap_Response msg_;
};

class Init_SaveExplorationMap_Response_saved_path
{
public:
  explicit Init_SaveExplorationMap_Response_saved_path(::isaac_interfaces::srv::SaveExplorationMap_Response & msg)
  : msg_(msg)
  {}
  Init_SaveExplorationMap_Response_message saved_path(::isaac_interfaces::srv::SaveExplorationMap_Response::_saved_path_type arg)
  {
    msg_.saved_path = std::move(arg);
    return Init_SaveExplorationMap_Response_message(msg_);
  }

private:
  ::isaac_interfaces::srv::SaveExplorationMap_Response msg_;
};

class Init_SaveExplorationMap_Response_success
{
public:
  Init_SaveExplorationMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveExplorationMap_Response_saved_path success(::isaac_interfaces::srv::SaveExplorationMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SaveExplorationMap_Response_saved_path(msg_);
  }

private:
  ::isaac_interfaces::srv::SaveExplorationMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::srv::SaveExplorationMap_Response>()
{
  return isaac_interfaces::srv::builder::Init_SaveExplorationMap_Response_success();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__SRV__DETAIL__SAVE_EXPLORATION_MAP__BUILDER_HPP_
