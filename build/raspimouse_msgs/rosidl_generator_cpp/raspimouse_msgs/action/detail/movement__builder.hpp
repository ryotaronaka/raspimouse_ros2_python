// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_
#define RASPIMOUSE_MSGS__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_

#include "raspimouse_msgs/action/detail/movement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_Goal_duration_ms
{
public:
  explicit Init_Movement_Goal_duration_ms(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Movement_Goal duration_ms(::raspimouse_msgs::action::Movement_Goal::_duration_ms_type arg)
  {
    msg_.duration_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_right_hz
{
public:
  explicit Init_Movement_Goal_right_hz(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_duration_ms right_hz(::raspimouse_msgs::action::Movement_Goal::_right_hz_type arg)
  {
    msg_.right_hz = std::move(arg);
    return Init_Movement_Goal_duration_ms(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_left_hz
{
public:
  explicit Init_Movement_Goal_left_hz(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_right_hz left_hz(::raspimouse_msgs::action::Movement_Goal::_left_hz_type arg)
  {
    msg_.left_hz = std::move(arg);
    return Init_Movement_Goal_right_hz(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_angular_z
{
public:
  explicit Init_Movement_Goal_angular_z(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_left_hz angular_z(::raspimouse_msgs::action::Movement_Goal::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return Init_Movement_Goal_left_hz(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_angular_y
{
public:
  explicit Init_Movement_Goal_angular_y(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_angular_z angular_y(::raspimouse_msgs::action::Movement_Goal::_angular_y_type arg)
  {
    msg_.angular_y = std::move(arg);
    return Init_Movement_Goal_angular_z(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_angular_x
{
public:
  explicit Init_Movement_Goal_angular_x(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_angular_y angular_x(::raspimouse_msgs::action::Movement_Goal::_angular_x_type arg)
  {
    msg_.angular_x = std::move(arg);
    return Init_Movement_Goal_angular_y(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_linear_z
{
public:
  explicit Init_Movement_Goal_linear_z(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_angular_x linear_z(::raspimouse_msgs::action::Movement_Goal::_linear_z_type arg)
  {
    msg_.linear_z = std::move(arg);
    return Init_Movement_Goal_angular_x(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_linear_y
{
public:
  explicit Init_Movement_Goal_linear_y(::raspimouse_msgs::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_linear_z linear_y(::raspimouse_msgs::action::Movement_Goal::_linear_y_type arg)
  {
    msg_.linear_y = std::move(arg);
    return Init_Movement_Goal_linear_z(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

class Init_Movement_Goal_linear_x
{
public:
  Init_Movement_Goal_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_Goal_linear_y linear_x(::raspimouse_msgs::action::Movement_Goal::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_Movement_Goal_linear_y(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_Goal>()
{
  return raspimouse_msgs::action::builder::Init_Movement_Goal_linear_x();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_Result_finished
{
public:
  Init_Movement_Result_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::Movement_Result finished(::raspimouse_msgs::action::Movement_Result::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_Result>()
{
  return raspimouse_msgs::action::builder::Init_Movement_Result_finished();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_Feedback_remaining_steps
{
public:
  Init_Movement_Feedback_remaining_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::Movement_Feedback remaining_steps(::raspimouse_msgs::action::Movement_Feedback::_remaining_steps_type arg)
  {
    msg_.remaining_steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_Feedback>()
{
  return raspimouse_msgs::action::builder::Init_Movement_Feedback_remaining_steps();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_SendGoal_Request_goal
{
public:
  explicit Init_Movement_SendGoal_Request_goal(::raspimouse_msgs::action::Movement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Movement_SendGoal_Request goal(::raspimouse_msgs::action::Movement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_SendGoal_Request msg_;
};

class Init_Movement_SendGoal_Request_goal_id
{
public:
  Init_Movement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_SendGoal_Request_goal goal_id(::raspimouse_msgs::action::Movement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Movement_SendGoal_Request_goal(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_SendGoal_Request>()
{
  return raspimouse_msgs::action::builder::Init_Movement_SendGoal_Request_goal_id();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_SendGoal_Response_stamp
{
public:
  explicit Init_Movement_SendGoal_Response_stamp(::raspimouse_msgs::action::Movement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Movement_SendGoal_Response stamp(::raspimouse_msgs::action::Movement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_SendGoal_Response msg_;
};

class Init_Movement_SendGoal_Response_accepted
{
public:
  Init_Movement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_SendGoal_Response_stamp accepted(::raspimouse_msgs::action::Movement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Movement_SendGoal_Response_stamp(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_SendGoal_Response>()
{
  return raspimouse_msgs::action::builder::Init_Movement_SendGoal_Response_accepted();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_GetResult_Request_goal_id
{
public:
  Init_Movement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::Movement_GetResult_Request goal_id(::raspimouse_msgs::action::Movement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_GetResult_Request>()
{
  return raspimouse_msgs::action::builder::Init_Movement_GetResult_Request_goal_id();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_GetResult_Response_result
{
public:
  explicit Init_Movement_GetResult_Response_result(::raspimouse_msgs::action::Movement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Movement_GetResult_Response result(::raspimouse_msgs::action::Movement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_GetResult_Response msg_;
};

class Init_Movement_GetResult_Response_status
{
public:
  Init_Movement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_GetResult_Response_result status(::raspimouse_msgs::action::Movement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Movement_GetResult_Response_result(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_GetResult_Response>()
{
  return raspimouse_msgs::action::builder::Init_Movement_GetResult_Response_status();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Movement_FeedbackMessage_feedback
{
public:
  explicit Init_Movement_FeedbackMessage_feedback(::raspimouse_msgs::action::Movement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Movement_FeedbackMessage feedback(::raspimouse_msgs::action::Movement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_FeedbackMessage msg_;
};

class Init_Movement_FeedbackMessage_goal_id
{
public:
  Init_Movement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_FeedbackMessage_feedback goal_id(::raspimouse_msgs::action::Movement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Movement_FeedbackMessage_feedback(msg_);
  }

private:
  ::raspimouse_msgs::action::Movement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Movement_FeedbackMessage>()
{
  return raspimouse_msgs::action::builder::Init_Movement_FeedbackMessage_goal_id();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_
