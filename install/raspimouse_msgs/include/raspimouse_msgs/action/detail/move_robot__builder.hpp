// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define RASPIMOUSE_MSGS__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include "raspimouse_msgs/action/detail/move_robot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Goal_z
{
public:
  explicit Init_MoveRobot_Goal_z(::raspimouse_msgs::action::MoveRobot_Goal & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::MoveRobot_Goal z(::raspimouse_msgs::action::MoveRobot_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Goal msg_;
};

class Init_MoveRobot_Goal_y
{
public:
  explicit Init_MoveRobot_Goal_y(::raspimouse_msgs::action::MoveRobot_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Goal_z y(::raspimouse_msgs::action::MoveRobot_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveRobot_Goal_z(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Goal msg_;
};

class Init_MoveRobot_Goal_x
{
public:
  Init_MoveRobot_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Goal_y x(::raspimouse_msgs::action::MoveRobot_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveRobot_Goal_y(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_Goal>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_Goal_x();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Result_message
{
public:
  Init_MoveRobot_Result_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::MoveRobot_Result message(::raspimouse_msgs::action::MoveRobot_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_Result>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_Result_message();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Feedback_d
{
public:
  explicit Init_MoveRobot_Feedback_d(::raspimouse_msgs::action::MoveRobot_Feedback & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::MoveRobot_Feedback d(::raspimouse_msgs::action::MoveRobot_Feedback::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Feedback msg_;
};

class Init_MoveRobot_Feedback_z
{
public:
  explicit Init_MoveRobot_Feedback_z(::raspimouse_msgs::action::MoveRobot_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Feedback_d z(::raspimouse_msgs::action::MoveRobot_Feedback::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MoveRobot_Feedback_d(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Feedback msg_;
};

class Init_MoveRobot_Feedback_y
{
public:
  explicit Init_MoveRobot_Feedback_y(::raspimouse_msgs::action::MoveRobot_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Feedback_z y(::raspimouse_msgs::action::MoveRobot_Feedback::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveRobot_Feedback_z(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Feedback msg_;
};

class Init_MoveRobot_Feedback_x
{
public:
  Init_MoveRobot_Feedback_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Feedback_y x(::raspimouse_msgs::action::MoveRobot_Feedback::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveRobot_Feedback_y(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_Feedback>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_Feedback_x();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Request_goal
{
public:
  explicit Init_MoveRobot_SendGoal_Request_goal(::raspimouse_msgs::action::MoveRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::MoveRobot_SendGoal_Request goal(::raspimouse_msgs::action::MoveRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_SendGoal_Request msg_;
};

class Init_MoveRobot_SendGoal_Request_goal_id
{
public:
  Init_MoveRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Request_goal goal_id(::raspimouse_msgs::action::MoveRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_SendGoal_Request>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_SendGoal_Request_goal_id();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Response_stamp
{
public:
  explicit Init_MoveRobot_SendGoal_Response_stamp(::raspimouse_msgs::action::MoveRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::MoveRobot_SendGoal_Response stamp(::raspimouse_msgs::action::MoveRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_SendGoal_Response msg_;
};

class Init_MoveRobot_SendGoal_Response_accepted
{
public:
  Init_MoveRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Response_stamp accepted(::raspimouse_msgs::action::MoveRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_SendGoal_Response>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_SendGoal_Response_accepted();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Request_goal_id
{
public:
  Init_MoveRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::MoveRobot_GetResult_Request goal_id(::raspimouse_msgs::action::MoveRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_GetResult_Request>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_GetResult_Request_goal_id();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Response_result
{
public:
  explicit Init_MoveRobot_GetResult_Response_result(::raspimouse_msgs::action::MoveRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::MoveRobot_GetResult_Response result(::raspimouse_msgs::action::MoveRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_GetResult_Response msg_;
};

class Init_MoveRobot_GetResult_Response_status
{
public:
  Init_MoveRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_GetResult_Response_result status(::raspimouse_msgs::action::MoveRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveRobot_GetResult_Response_result(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_GetResult_Response>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_GetResult_Response_status();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_MoveRobot_FeedbackMessage_feedback
{
public:
  explicit Init_MoveRobot_FeedbackMessage_feedback(::raspimouse_msgs::action::MoveRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::MoveRobot_FeedbackMessage feedback(::raspimouse_msgs::action::MoveRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_FeedbackMessage msg_;
};

class Init_MoveRobot_FeedbackMessage_goal_id
{
public:
  Init_MoveRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_FeedbackMessage_feedback goal_id(::raspimouse_msgs::action::MoveRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::raspimouse_msgs::action::MoveRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::MoveRobot_FeedbackMessage>()
{
  return raspimouse_msgs::action::builder::Init_MoveRobot_FeedbackMessage_goal_id();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
