// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from light_sensor_values:srv/LightSensorValuesService.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__BUILDER_HPP_
#define LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__BUILDER_HPP_

#include "light_sensor_values/srv/detail/light_sensor_values_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace light_sensor_values
{

namespace srv
{

namespace builder
{

class Init_LightSensorValuesService_Request_d
{
public:
  explicit Init_LightSensorValuesService_Request_d(::light_sensor_values::srv::LightSensorValuesService_Request & msg)
  : msg_(msg)
  {}
  ::light_sensor_values::srv::LightSensorValuesService_Request d(::light_sensor_values::srv::LightSensorValuesService_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::light_sensor_values::srv::LightSensorValuesService_Request msg_;
};

class Init_LightSensorValuesService_Request_c
{
public:
  explicit Init_LightSensorValuesService_Request_c(::light_sensor_values::srv::LightSensorValuesService_Request & msg)
  : msg_(msg)
  {}
  Init_LightSensorValuesService_Request_d c(::light_sensor_values::srv::LightSensorValuesService_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_LightSensorValuesService_Request_d(msg_);
  }

private:
  ::light_sensor_values::srv::LightSensorValuesService_Request msg_;
};

class Init_LightSensorValuesService_Request_b
{
public:
  explicit Init_LightSensorValuesService_Request_b(::light_sensor_values::srv::LightSensorValuesService_Request & msg)
  : msg_(msg)
  {}
  Init_LightSensorValuesService_Request_c b(::light_sensor_values::srv::LightSensorValuesService_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_LightSensorValuesService_Request_c(msg_);
  }

private:
  ::light_sensor_values::srv::LightSensorValuesService_Request msg_;
};

class Init_LightSensorValuesService_Request_a
{
public:
  Init_LightSensorValuesService_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightSensorValuesService_Request_b a(::light_sensor_values::srv::LightSensorValuesService_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_LightSensorValuesService_Request_b(msg_);
  }

private:
  ::light_sensor_values::srv::LightSensorValuesService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::light_sensor_values::srv::LightSensorValuesService_Request>()
{
  return light_sensor_values::srv::builder::Init_LightSensorValuesService_Request_a();
}

}  // namespace light_sensor_values


namespace light_sensor_values
{

namespace srv
{

namespace builder
{

class Init_LightSensorValuesService_Response_sum
{
public:
  Init_LightSensorValuesService_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::light_sensor_values::srv::LightSensorValuesService_Response sum(::light_sensor_values::srv::LightSensorValuesService_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::light_sensor_values::srv::LightSensorValuesService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::light_sensor_values::srv::LightSensorValuesService_Response>()
{
  return light_sensor_values::srv::builder::Init_LightSensorValuesService_Response_sum();
}

}  // namespace light_sensor_values

#endif  // LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__BUILDER_HPP_
