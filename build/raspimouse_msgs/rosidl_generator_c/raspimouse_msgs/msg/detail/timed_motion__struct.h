// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspimouse_msgs:msg/TimedMotion.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__STRUCT_H_
#define RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TimedMotion in the package raspimouse_msgs.
typedef struct raspimouse_msgs__msg__TimedMotion
{
  int16_t left_hz;
  int16_t right_hz;
  uint32_t duration_ms;
} raspimouse_msgs__msg__TimedMotion;

// Struct for a sequence of raspimouse_msgs__msg__TimedMotion.
typedef struct raspimouse_msgs__msg__TimedMotion__Sequence
{
  raspimouse_msgs__msg__TimedMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__msg__TimedMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__STRUCT_H_
