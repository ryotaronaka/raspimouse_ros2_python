// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from light_sensor_values:srv/LightSensorValuesService.idl
// generated code does not contain a copyright notice
#include "light_sensor_values/srv/detail/light_sensor_values_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "light_sensor_values/srv/detail/light_sensor_values_service__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
cdr_serialize(
  const light_sensor_values::srv::LightSensorValuesService_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a
  cdr << ros_message.a;
  // Member: b
  cdr << ros_message.b;
  // Member: c
  cdr << ros_message.c;
  // Member: d
  cdr << ros_message.d;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  light_sensor_values::srv::LightSensorValuesService_Request & ros_message)
{
  // Member: a
  cdr >> ros_message.a;

  // Member: b
  cdr >> ros_message.b;

  // Member: c
  cdr >> ros_message.c;

  // Member: d
  cdr >> ros_message.d;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
get_serialized_size(
  const light_sensor_values::srv::LightSensorValuesService_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c
  {
    size_t item_size = sizeof(ros_message.c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
max_serialized_size_LightSensorValuesService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LightSensorValuesService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const light_sensor_values::srv::LightSensorValuesService_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LightSensorValuesService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<light_sensor_values::srv::LightSensorValuesService_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LightSensorValuesService_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const light_sensor_values::srv::LightSensorValuesService_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LightSensorValuesService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LightSensorValuesService_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _LightSensorValuesService_Request__callbacks = {
  "light_sensor_values::srv",
  "LightSensorValuesService_Request",
  _LightSensorValuesService_Request__cdr_serialize,
  _LightSensorValuesService_Request__cdr_deserialize,
  _LightSensorValuesService_Request__get_serialized_size,
  _LightSensorValuesService_Request__max_serialized_size
};

static rosidl_message_type_support_t _LightSensorValuesService_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LightSensorValuesService_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace light_sensor_values

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_light_sensor_values
const rosidl_message_type_support_t *
get_message_type_support_handle<light_sensor_values::srv::LightSensorValuesService_Request>()
{
  return &light_sensor_values::srv::typesupport_fastrtps_cpp::_LightSensorValuesService_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, light_sensor_values, srv, LightSensorValuesService_Request)() {
  return &light_sensor_values::srv::typesupport_fastrtps_cpp::_LightSensorValuesService_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace light_sensor_values
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
cdr_serialize(
  const light_sensor_values::srv::LightSensorValuesService_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sum
  cdr << ros_message.sum;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  light_sensor_values::srv::LightSensorValuesService_Response & ros_message)
{
  // Member: sum
  cdr >> ros_message.sum;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
get_serialized_size(
  const light_sensor_values::srv::LightSensorValuesService_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sum
  {
    size_t item_size = sizeof(ros_message.sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_light_sensor_values
max_serialized_size_LightSensorValuesService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LightSensorValuesService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const light_sensor_values::srv::LightSensorValuesService_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LightSensorValuesService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<light_sensor_values::srv::LightSensorValuesService_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LightSensorValuesService_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const light_sensor_values::srv::LightSensorValuesService_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LightSensorValuesService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LightSensorValuesService_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _LightSensorValuesService_Response__callbacks = {
  "light_sensor_values::srv",
  "LightSensorValuesService_Response",
  _LightSensorValuesService_Response__cdr_serialize,
  _LightSensorValuesService_Response__cdr_deserialize,
  _LightSensorValuesService_Response__get_serialized_size,
  _LightSensorValuesService_Response__max_serialized_size
};

static rosidl_message_type_support_t _LightSensorValuesService_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LightSensorValuesService_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace light_sensor_values

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_light_sensor_values
const rosidl_message_type_support_t *
get_message_type_support_handle<light_sensor_values::srv::LightSensorValuesService_Response>()
{
  return &light_sensor_values::srv::typesupport_fastrtps_cpp::_LightSensorValuesService_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, light_sensor_values, srv, LightSensorValuesService_Response)() {
  return &light_sensor_values::srv::typesupport_fastrtps_cpp::_LightSensorValuesService_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace light_sensor_values
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _LightSensorValuesService__callbacks = {
  "light_sensor_values::srv",
  "LightSensorValuesService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, light_sensor_values, srv, LightSensorValuesService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, light_sensor_values, srv, LightSensorValuesService_Response)(),
};

static rosidl_service_type_support_t _LightSensorValuesService__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LightSensorValuesService__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace light_sensor_values

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_light_sensor_values
const rosidl_service_type_support_t *
get_service_type_support_handle<light_sensor_values::srv::LightSensorValuesService>()
{
  return &light_sensor_values::srv::typesupport_fastrtps_cpp::_LightSensorValuesService__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, light_sensor_values, srv, LightSensorValuesService)() {
  return &light_sensor_values::srv::typesupport_fastrtps_cpp::_LightSensorValuesService__handle;
}

#ifdef __cplusplus
}
#endif
