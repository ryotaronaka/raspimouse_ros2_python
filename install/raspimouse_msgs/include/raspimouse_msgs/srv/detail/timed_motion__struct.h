// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspimouse_msgs:srv/TimedMotion.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION__STRUCT_H_
#define RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TimedMotion in the package raspimouse_msgs.
typedef struct raspimouse_msgs__srv__TimedMotion_Request
{
  int16_t left_hz;
  int16_t right_hz;
  uint32_t duration_ms;
} raspimouse_msgs__srv__TimedMotion_Request;

// Struct for a sequence of raspimouse_msgs__srv__TimedMotion_Request.
typedef struct raspimouse_msgs__srv__TimedMotion_Request__Sequence
{
  raspimouse_msgs__srv__TimedMotion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__srv__TimedMotion_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TimedMotion in the package raspimouse_msgs.
typedef struct raspimouse_msgs__srv__TimedMotion_Response
{
  bool success;
} raspimouse_msgs__srv__TimedMotion_Response;

// Struct for a sequence of raspimouse_msgs__srv__TimedMotion_Response.
typedef struct raspimouse_msgs__srv__TimedMotion_Response__Sequence
{
  raspimouse_msgs__srv__TimedMotion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__srv__TimedMotion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION__STRUCT_H_
