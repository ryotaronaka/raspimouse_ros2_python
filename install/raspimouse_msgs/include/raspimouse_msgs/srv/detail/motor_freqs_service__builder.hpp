// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:srv/MotorFreqsService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__BUILDER_HPP_
#define RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__BUILDER_HPP_

#include "raspimouse_msgs/srv/detail/motor_freqs_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorFreqsService_Request_f
{
public:
  explicit Init_MotorFreqsService_Request_f(::raspimouse_msgs::srv::MotorFreqsService_Request & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::srv::MotorFreqsService_Request f(::raspimouse_msgs::srv::MotorFreqsService_Request::_f_type arg)
  {
    msg_.f = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::srv::MotorFreqsService_Request msg_;
};

class Init_MotorFreqsService_Request_e
{
public:
  Init_MotorFreqsService_Request_e()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFreqsService_Request_f e(::raspimouse_msgs::srv::MotorFreqsService_Request::_e_type arg)
  {
    msg_.e = std::move(arg);
    return Init_MotorFreqsService_Request_f(msg_);
  }

private:
  ::raspimouse_msgs::srv::MotorFreqsService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::srv::MotorFreqsService_Request>()
{
  return raspimouse_msgs::srv::builder::Init_MotorFreqsService_Request_e();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::srv::MotorFreqsService_Response>()
{
  return ::raspimouse_msgs::srv::MotorFreqsService_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__BUILDER_HPP_
