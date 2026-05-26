// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_interfaces:action/ExecuteDriveTask.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__ACTION__DETAIL__EXECUTE_DRIVE_TASK__BUILDER_HPP_
#define ISAAC_INTERFACES__ACTION__DETAIL__EXECUTE_DRIVE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_interfaces/action/detail/execute_drive_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_Goal_metadata
{
public:
  explicit Init_ExecuteDriveTask_Goal_metadata(::isaac_interfaces::action::ExecuteDriveTask_Goal & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_Goal metadata(::isaac_interfaces::action::ExecuteDriveTask_Goal::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Goal msg_;
};

class Init_ExecuteDriveTask_Goal_target_id
{
public:
  explicit Init_ExecuteDriveTask_Goal_target_id(::isaac_interfaces::action::ExecuteDriveTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteDriveTask_Goal_metadata target_id(::isaac_interfaces::action::ExecuteDriveTask_Goal::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_ExecuteDriveTask_Goal_metadata(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Goal msg_;
};

class Init_ExecuteDriveTask_Goal_target_yaw
{
public:
  explicit Init_ExecuteDriveTask_Goal_target_yaw(::isaac_interfaces::action::ExecuteDriveTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteDriveTask_Goal_target_id target_yaw(::isaac_interfaces::action::ExecuteDriveTask_Goal::_target_yaw_type arg)
  {
    msg_.target_yaw = std::move(arg);
    return Init_ExecuteDriveTask_Goal_target_id(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Goal msg_;
};

class Init_ExecuteDriveTask_Goal_target_y
{
public:
  explicit Init_ExecuteDriveTask_Goal_target_y(::isaac_interfaces::action::ExecuteDriveTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteDriveTask_Goal_target_yaw target_y(::isaac_interfaces::action::ExecuteDriveTask_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_ExecuteDriveTask_Goal_target_yaw(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Goal msg_;
};

class Init_ExecuteDriveTask_Goal_target_x
{
public:
  explicit Init_ExecuteDriveTask_Goal_target_x(::isaac_interfaces::action::ExecuteDriveTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteDriveTask_Goal_target_y target_x(::isaac_interfaces::action::ExecuteDriveTask_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_ExecuteDriveTask_Goal_target_y(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Goal msg_;
};

class Init_ExecuteDriveTask_Goal_command
{
public:
  Init_ExecuteDriveTask_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteDriveTask_Goal_target_x command(::isaac_interfaces::action::ExecuteDriveTask_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ExecuteDriveTask_Goal_target_x(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_Goal>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_Goal_command();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_Result_message
{
public:
  explicit Init_ExecuteDriveTask_Result_message(::isaac_interfaces::action::ExecuteDriveTask_Result & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_Result message(::isaac_interfaces::action::ExecuteDriveTask_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Result msg_;
};

class Init_ExecuteDriveTask_Result_success
{
public:
  Init_ExecuteDriveTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteDriveTask_Result_message success(::isaac_interfaces::action::ExecuteDriveTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteDriveTask_Result_message(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_Result>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_Result_success();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_Feedback_message
{
public:
  explicit Init_ExecuteDriveTask_Feedback_message(::isaac_interfaces::action::ExecuteDriveTask_Feedback & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_Feedback message(::isaac_interfaces::action::ExecuteDriveTask_Feedback::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Feedback msg_;
};

class Init_ExecuteDriveTask_Feedback_progress
{
public:
  explicit Init_ExecuteDriveTask_Feedback_progress(::isaac_interfaces::action::ExecuteDriveTask_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExecuteDriveTask_Feedback_message progress(::isaac_interfaces::action::ExecuteDriveTask_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_ExecuteDriveTask_Feedback_message(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Feedback msg_;
};

class Init_ExecuteDriveTask_Feedback_state
{
public:
  Init_ExecuteDriveTask_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteDriveTask_Feedback_progress state(::isaac_interfaces::action::ExecuteDriveTask_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ExecuteDriveTask_Feedback_progress(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_Feedback>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_Feedback_state();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteDriveTask_SendGoal_Request_goal(::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Request goal(::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Request msg_;
};

class Init_ExecuteDriveTask_SendGoal_Request_goal_id
{
public:
  Init_ExecuteDriveTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteDriveTask_SendGoal_Request_goal goal_id(::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteDriveTask_SendGoal_Request_goal(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Request>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_SendGoal_Request_goal_id();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteDriveTask_SendGoal_Response_stamp(::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Response stamp(::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Response msg_;
};

class Init_ExecuteDriveTask_SendGoal_Response_accepted
{
public:
  Init_ExecuteDriveTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteDriveTask_SendGoal_Response_stamp accepted(::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteDriveTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_SendGoal_Response>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_SendGoal_Response_accepted();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_GetResult_Request_goal_id
{
public:
  Init_ExecuteDriveTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_GetResult_Request goal_id(::isaac_interfaces::action::ExecuteDriveTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_GetResult_Request>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_GetResult_Request_goal_id();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_GetResult_Response_result
{
public:
  explicit Init_ExecuteDriveTask_GetResult_Response_result(::isaac_interfaces::action::ExecuteDriveTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_GetResult_Response result(::isaac_interfaces::action::ExecuteDriveTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_GetResult_Response msg_;
};

class Init_ExecuteDriveTask_GetResult_Response_status
{
public:
  Init_ExecuteDriveTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteDriveTask_GetResult_Response_result status(::isaac_interfaces::action::ExecuteDriveTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteDriveTask_GetResult_Response_result(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_GetResult_Response>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_GetResult_Response_status();
}

}  // namespace isaac_interfaces


namespace isaac_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteDriveTask_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteDriveTask_FeedbackMessage_feedback(::isaac_interfaces::action::ExecuteDriveTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::isaac_interfaces::action::ExecuteDriveTask_FeedbackMessage feedback(::isaac_interfaces::action::ExecuteDriveTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_FeedbackMessage msg_;
};

class Init_ExecuteDriveTask_FeedbackMessage_goal_id
{
public:
  Init_ExecuteDriveTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteDriveTask_FeedbackMessage_feedback goal_id(::isaac_interfaces::action::ExecuteDriveTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteDriveTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::isaac_interfaces::action::ExecuteDriveTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_interfaces::action::ExecuteDriveTask_FeedbackMessage>()
{
  return isaac_interfaces::action::builder::Init_ExecuteDriveTask_FeedbackMessage_goal_id();
}

}  // namespace isaac_interfaces

#endif  // ISAAC_INTERFACES__ACTION__DETAIL__EXECUTE_DRIVE_TASK__BUILDER_HPP_
