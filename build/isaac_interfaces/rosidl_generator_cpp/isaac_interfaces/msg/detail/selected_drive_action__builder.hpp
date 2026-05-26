// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:msg/SelectedDriveAction.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__BUILDER_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/msg/detail/selected_drive_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace msg
{

namespace builder
{

class Init_SelectedDriveAction_reason
{
public:
  explicit Init_SelectedDriveAction_reason(::isaac_interfaces::msg::SelectedDriveAction & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::msg::SelectedDriveAction reason(::isaac_interfaces::msg::SelectedDriveAction::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

class Init_SelectedDriveAction_confidence
{
public:
  explicit Init_SelectedDriveAction_confidence(::isaac_interfaces::msg::SelectedDriveAction & msg)
  : msg_(msg)
  {}
  Init_SelectedDriveAction_reason confidence(::isaac_interfaces::msg::SelectedDriveAction::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_SelectedDriveAction_reason(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

class Init_SelectedDriveAction_angular_velocity
{
public:
  explicit Init_SelectedDriveAction_angular_velocity(::isaac_interfaces::msg::SelectedDriveAction & msg)
  : msg_(msg)
  {}
  Init_SelectedDriveAction_confidence angular_velocity(::isaac_interfaces::msg::SelectedDriveAction::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_SelectedDriveAction_confidence(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

class Init_SelectedDriveAction_linear_velocity
{
public:
  explicit Init_SelectedDriveAction_linear_velocity(::isaac_interfaces::msg::SelectedDriveAction & msg)
  : msg_(msg)
  {}
  Init_SelectedDriveAction_angular_velocity linear_velocity(::isaac_interfaces::msg::SelectedDriveAction::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_SelectedDriveAction_angular_velocity(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

class Init_SelectedDriveAction_target_yaw
{
public:
  explicit Init_SelectedDriveAction_target_yaw(::isaac_interfaces::msg::SelectedDriveAction & msg)
  : msg_(msg)
  {}
  Init_SelectedDriveAction_linear_velocity target_yaw(::isaac_interfaces::msg::SelectedDriveAction::_target_yaw_type arg)
  {
    msg_.target_yaw = std::move(arg);
    return Init_SelectedDriveAction_linear_velocity(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

class Init_SelectedDriveAction_target_y
{
public:
  explicit Init_SelectedDriveAction_target_y(::isaac_interfaces::msg::SelectedDriveAction & msg)
  : msg_(msg)
  {}
  Init_SelectedDriveAction_target_yaw target_y(::isaac_interfaces::msg::SelectedDriveAction::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_SelectedDriveAction_target_yaw(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

class Init_SelectedDriveAction_target_x
{
public:
  explicit Init_SelectedDriveAction_target_x(::isaac_interfaces::msg::SelectedDriveAction & msg)
  : msg_(msg)
  {}
  Init_SelectedDriveAction_target_y target_x(::isaac_interfaces::msg::SelectedDriveAction::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_SelectedDriveAction_target_y(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

class Init_SelectedDriveAction_action
{
public:
  Init_SelectedDriveAction_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SelectedDriveAction_target_x action(::isaac_interfaces::msg::SelectedDriveAction::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_SelectedDriveAction_target_x(msg_);
  }

private:
  ::isaac_interfaces::msg::SelectedDriveAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::msg::SelectedDriveAction>()
{
  return isaac_interfaces::msg::builder::Init_SelectedDriveAction_action();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__BUILDER_HPP_
