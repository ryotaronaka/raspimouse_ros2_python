// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:action/Music.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__BUILDER_HPP_
#define RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__BUILDER_HPP_

#include "raspimouse_msgs/action/detail/music__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_Goal_durations
{
public:
  explicit Init_Music_Goal_durations(::raspimouse_msgs::action::Music_Goal & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Music_Goal durations(::raspimouse_msgs::action::Music_Goal::_durations_type arg)
  {
    msg_.durations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_Goal msg_;
};

class Init_Music_Goal_freqs
{
public:
  Init_Music_Goal_freqs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Music_Goal_durations freqs(::raspimouse_msgs::action::Music_Goal::_freqs_type arg)
  {
    msg_.freqs = std::move(arg);
    return Init_Music_Goal_durations(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_Goal>()
{
  return raspimouse_msgs::action::builder::Init_Music_Goal_freqs();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_Result_finished
{
public:
  Init_Music_Result_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::Music_Result finished(::raspimouse_msgs::action::Music_Result::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_Result>()
{
  return raspimouse_msgs::action::builder::Init_Music_Result_finished();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_Feedback_remaining_steps
{
public:
  Init_Music_Feedback_remaining_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::Music_Feedback remaining_steps(::raspimouse_msgs::action::Music_Feedback::_remaining_steps_type arg)
  {
    msg_.remaining_steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_Feedback>()
{
  return raspimouse_msgs::action::builder::Init_Music_Feedback_remaining_steps();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_SendGoal_Request_goal
{
public:
  explicit Init_Music_SendGoal_Request_goal(::raspimouse_msgs::action::Music_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Music_SendGoal_Request goal(::raspimouse_msgs::action::Music_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_SendGoal_Request msg_;
};

class Init_Music_SendGoal_Request_goal_id
{
public:
  Init_Music_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Music_SendGoal_Request_goal goal_id(::raspimouse_msgs::action::Music_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Music_SendGoal_Request_goal(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_SendGoal_Request>()
{
  return raspimouse_msgs::action::builder::Init_Music_SendGoal_Request_goal_id();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_SendGoal_Response_stamp
{
public:
  explicit Init_Music_SendGoal_Response_stamp(::raspimouse_msgs::action::Music_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Music_SendGoal_Response stamp(::raspimouse_msgs::action::Music_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_SendGoal_Response msg_;
};

class Init_Music_SendGoal_Response_accepted
{
public:
  Init_Music_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Music_SendGoal_Response_stamp accepted(::raspimouse_msgs::action::Music_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Music_SendGoal_Response_stamp(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_SendGoal_Response>()
{
  return raspimouse_msgs::action::builder::Init_Music_SendGoal_Response_accepted();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_GetResult_Request_goal_id
{
public:
  Init_Music_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::action::Music_GetResult_Request goal_id(::raspimouse_msgs::action::Music_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_GetResult_Request>()
{
  return raspimouse_msgs::action::builder::Init_Music_GetResult_Request_goal_id();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_GetResult_Response_result
{
public:
  explicit Init_Music_GetResult_Response_result(::raspimouse_msgs::action::Music_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Music_GetResult_Response result(::raspimouse_msgs::action::Music_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_GetResult_Response msg_;
};

class Init_Music_GetResult_Response_status
{
public:
  Init_Music_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Music_GetResult_Response_result status(::raspimouse_msgs::action::Music_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Music_GetResult_Response_result(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_GetResult_Response>()
{
  return raspimouse_msgs::action::builder::Init_Music_GetResult_Response_status();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace action
{

namespace builder
{

class Init_Music_FeedbackMessage_feedback
{
public:
  explicit Init_Music_FeedbackMessage_feedback(::raspimouse_msgs::action::Music_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::action::Music_FeedbackMessage feedback(::raspimouse_msgs::action::Music_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_FeedbackMessage msg_;
};

class Init_Music_FeedbackMessage_goal_id
{
public:
  Init_Music_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Music_FeedbackMessage_feedback goal_id(::raspimouse_msgs::action::Music_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Music_FeedbackMessage_feedback(msg_);
  }

private:
  ::raspimouse_msgs::action::Music_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::action::Music_FeedbackMessage>()
{
  return raspimouse_msgs::action::builder::Init_Music_FeedbackMessage_goal_id();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__BUILDER_HPP_
