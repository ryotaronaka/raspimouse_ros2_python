// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from light_sensor_values:msg/LightSensorValues.idl
// generated code does not contain a copyright notice
#include "light_sensor_values/msg/detail/light_sensor_values__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "light_sensor_values/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "light_sensor_values/msg/detail/light_sensor_values__struct.h"
#include "light_sensor_values/msg/detail/light_sensor_values__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LightSensorValues__ros_msg_type = light_sensor_values__msg__LightSensorValues;

static bool _LightSensorValues__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LightSensorValues__ros_msg_type * ros_message = static_cast<const _LightSensorValues__ros_msg_type *>(untyped_ros_message);
  // Field name: right_forward
  {
    cdr << ros_message->right_forward;
  }

  // Field name: right_side
  {
    cdr << ros_message->right_side;
  }

  // Field name: left_side
  {
    cdr << ros_message->left_side;
  }

  // Field name: left_forward
  {
    cdr << ros_message->left_forward;
  }

  // Field name: sum_all
  {
    cdr << ros_message->sum_all;
  }

  // Field name: sum_forward
  {
    cdr << ros_message->sum_forward;
  }

  return true;
}

static bool _LightSensorValues__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LightSensorValues__ros_msg_type * ros_message = static_cast<_LightSensorValues__ros_msg_type *>(untyped_ros_message);
  // Field name: right_forward
  {
    cdr >> ros_message->right_forward;
  }

  // Field name: right_side
  {
    cdr >> ros_message->right_side;
  }

  // Field name: left_side
  {
    cdr >> ros_message->left_side;
  }

  // Field name: left_forward
  {
    cdr >> ros_message->left_forward;
  }

  // Field name: sum_all
  {
    cdr >> ros_message->sum_all;
  }

  // Field name: sum_forward
  {
    cdr >> ros_message->sum_forward;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_light_sensor_values
size_t get_serialized_size_light_sensor_values__msg__LightSensorValues(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LightSensorValues__ros_msg_type * ros_message = static_cast<const _LightSensorValues__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name right_forward
  {
    size_t item_size = sizeof(ros_message->right_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_side
  {
    size_t item_size = sizeof(ros_message->right_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_side
  {
    size_t item_size = sizeof(ros_message->left_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_forward
  {
    size_t item_size = sizeof(ros_message->left_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sum_all
  {
    size_t item_size = sizeof(ros_message->sum_all);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sum_forward
  {
    size_t item_size = sizeof(ros_message->sum_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LightSensorValues__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_light_sensor_values__msg__LightSensorValues(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_light_sensor_values
size_t max_serialized_size_light_sensor_values__msg__LightSensorValues(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: right_forward
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_forward
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sum_all
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sum_forward
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LightSensorValues__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_light_sensor_values__msg__LightSensorValues(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LightSensorValues = {
  "light_sensor_values::msg",
  "LightSensorValues",
  _LightSensorValues__cdr_serialize,
  _LightSensorValues__cdr_deserialize,
  _LightSensorValues__get_serialized_size,
  _LightSensorValues__max_serialized_size
};

static rosidl_message_type_support_t _LightSensorValues__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LightSensorValues,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, light_sensor_values, msg, LightSensorValues)() {
  return &_LightSensorValues__type_support;
}

#if defined(__cplusplus)
}
#endif
