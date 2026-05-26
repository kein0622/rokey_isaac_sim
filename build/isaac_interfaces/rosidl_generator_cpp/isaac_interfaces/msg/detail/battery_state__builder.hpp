// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryState_source
{
public:
  explicit Init_BatteryState_source(::isaac_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::msg::BatteryState source(::isaac_interfaces::msg::BatteryState::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_current
{
public:
  explicit Init_BatteryState_current(::isaac_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_source current(::isaac_interfaces::msg::BatteryState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryState_source(msg_);
  }

private:
  ::isaac_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_voltage
{
public:
  explicit Init_BatteryState_voltage(::isaac_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_current voltage(::isaac_interfaces::msg::BatteryState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryState_current(msg_);
  }

private:
  ::isaac_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_is_critical
{
public:
  explicit Init_BatteryState_is_critical(::isaac_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_voltage is_critical(::isaac_interfaces::msg::BatteryState::_is_critical_type arg)
  {
    msg_.is_critical = std::move(arg);
    return Init_BatteryState_voltage(msg_);
  }

private:
  ::isaac_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_is_low
{
public:
  explicit Init_BatteryState_is_low(::isaac_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_is_critical is_low(::isaac_interfaces::msg::BatteryState::_is_low_type arg)
  {
    msg_.is_low = std::move(arg);
    return Init_BatteryState_is_critical(msg_);
  }

private:
  ::isaac_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_is_charging
{
public:
  explicit Init_BatteryState_is_charging(::isaac_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_is_low is_charging(::isaac_interfaces::msg::BatteryState::_is_charging_type arg)
  {
    msg_.is_charging = std::move(arg);
    return Init_BatteryState_is_low(msg_);
  }

private:
  ::isaac_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_percentage
{
public:
  Init_BatteryState_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryState_is_charging percentage(::isaac_interfaces::msg::BatteryState::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return Init_BatteryState_is_charging(msg_);
  }

private:
  ::isaac_interfaces::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::msg::BatteryState>()
{
  return isaac_interfaces::msg::builder::Init_BatteryState_percentage();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
