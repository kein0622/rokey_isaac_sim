// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionState_last_error
{
public:
  explicit Init_MissionState_last_error(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::msg::MissionState last_error(::isaac_interfaces::msg::MissionState::_last_error_type arg)
  {
    msg_.last_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_active_task
{
public:
  explicit Init_MissionState_active_task(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_last_error active_task(::isaac_interfaces::msg::MissionState::_active_task_type arg)
  {
    msg_.active_task = std::move(arg);
    return Init_MissionState_last_error(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_collection_goal
{
public:
  explicit Init_MissionState_collection_goal(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_active_task collection_goal(::isaac_interfaces::msg::MissionState::_collection_goal_type arg)
  {
    msg_.collection_goal = std::move(arg);
    return Init_MissionState_active_task(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_collected_count
{
public:
  explicit Init_MissionState_collected_count(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_collection_goal collected_count(::isaac_interfaces::msg::MissionState::_collected_count_type arg)
  {
    msg_.collected_count = std::move(arg);
    return Init_MissionState_collection_goal(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_cargo_capacity
{
public:
  explicit Init_MissionState_cargo_capacity(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_collected_count cargo_capacity(::isaac_interfaces::msg::MissionState::_cargo_capacity_type arg)
  {
    msg_.cargo_capacity = std::move(arg);
    return Init_MissionState_collected_count(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_cargo_count
{
public:
  explicit Init_MissionState_cargo_count(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_cargo_capacity cargo_count(::isaac_interfaces::msg::MissionState::_cargo_count_type arg)
  {
    msg_.cargo_count = std::move(arg);
    return Init_MissionState_cargo_capacity(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_critical_battery
{
public:
  explicit Init_MissionState_critical_battery(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_cargo_count critical_battery(::isaac_interfaces::msg::MissionState::_critical_battery_type arg)
  {
    msg_.critical_battery = std::move(arg);
    return Init_MissionState_cargo_count(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_low_battery
{
public:
  explicit Init_MissionState_low_battery(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_critical_battery low_battery(::isaac_interfaces::msg::MissionState::_low_battery_type arg)
  {
    msg_.low_battery = std::move(arg);
    return Init_MissionState_critical_battery(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_battery_percent
{
public:
  explicit Init_MissionState_battery_percent(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_low_battery battery_percent(::isaac_interfaces::msg::MissionState::_battery_percent_type arg)
  {
    msg_.battery_percent = std::move(arg);
    return Init_MissionState_low_battery(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_previous_state
{
public:
  explicit Init_MissionState_previous_state(::isaac_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_battery_percent previous_state(::isaac_interfaces::msg::MissionState::_previous_state_type arg)
  {
    msg_.previous_state = std::move(arg);
    return Init_MissionState_battery_percent(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

class Init_MissionState_state
{
public:
  Init_MissionState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionState_previous_state state(::isaac_interfaces::msg::MissionState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MissionState_previous_state(msg_);
  }

private:
  ::isaac_interfaces::msg::MissionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::msg::MissionState>()
{
  return isaac_interfaces::msg::builder::Init_MissionState_state();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
