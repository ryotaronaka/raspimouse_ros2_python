// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from light_sensor_values:msg/LightSensorValues.idl
// generated code does not contain a copyright notice
#include "light_sensor_values/msg/detail/light_sensor_values__rosidl_typesupport_fastrtps_cpp.hpp"
#include "light_sensor_values/msg/detail/light_sensor_values__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace light_sensor_values
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
cdr_serialize(
  const light_sensor_values::msg::LightSensorValues & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_forward
  cdr << ros_message.right_forward;
  // Member: right_side
  cdr << ros_message.right_side;
  // Member: left_side
  cdr << ros_message.left_side;
  // Member: left_forward
  cdr << ros_message.left_forward;
  // Member: sum_all
  cdr << ros_message.sum_all;
  // Member: sum_forward
  cdr << ros_message.sum_forward;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  light_sensor_values::msg::LightSensorValues & ros_message)
{
  // Member: right_forward
  cdr >> ros_message.right_forward;

  // Member: right_side
  cdr >> ros_message.right_side;

  // Member: left_side
  cdr >> ros_message.left_side;

  // Member: left_forward
  cdr >> ros_message.left_forward;

  // Member: sum_all
  cdr >> ros_message.sum_all;

  // Member: sum_forward
  cdr >> ros_message.sum_forward;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
get_serialized_size(
  const light_sensor_values::msg::LightSensorValues & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_forward
  {
    size_t item_size = sizeof(ros_message.right_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_side
  {
    size_t item_size = sizeof(ros_message.right_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_side
  {
    size_t item_size = sizeof(ros_message.left_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_forward
  {
    size_t item_size = sizeof(ros_message.left_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sum_all
  {
    size_t item_size = sizeof(ros_message.sum_all);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sum_forward
  {
    size_t item_size = sizeof(ros_message.sum_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
max_serialized_size_LightSensorValues(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: right_forward
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_forward
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sum_all
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sum_forward
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LightSensorValues__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const light_sensor_values::msg::LightSensorValues *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LightSensorValues__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<light_sensor_values::msg::LightSensorValues *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LightSensorValues__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const light_sensor_values::msg::LightSensorValues *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LightSensorValues__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LightSensorValues(full_bounded, 0);
}

static message_type_support_callbacks_t _LightSensorValues__callbacks = {
  "light_sensor_values::msg",
  "LightSensorValues",
  _LightSensorValues__cdr_serialize,
  _LightSensorValues__cdr_deserialize,
  _LightSensorValues__get_serialized_size,
  _LightSensorValues__max_serialized_size
};

static rosidl_message_type_support_t _LightSensorValues__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LightSensorValues__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace light_sensor_values

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_light_sensor_values
const rosidl_message_type_support_t *
get_message_type_support_handle<light_sensor_values::msg::LightSensorValues>()
{
  return &light_sensor_values::msg::typesupport_fastrtps_cpp::_LightSensorValues__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, light_sensor_values, msg, LightSensorValues)() {
  return &light_sensor_values::msg::typesupport_fastrtps_cpp::_LightSensorValues__handle;
}

#ifdef __cplusplus
}
#endif
