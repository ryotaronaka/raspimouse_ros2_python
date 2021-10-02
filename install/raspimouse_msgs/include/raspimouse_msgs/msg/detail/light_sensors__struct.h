// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspimouse_msgs:msg/LightSensors.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__STRUCT_H_
#define RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LightSensors in the package raspimouse_msgs.
typedef struct raspimouse_msgs__msg__LightSensors
{
  int16_t right_forward;
  int16_t right_side;
  int16_t left_side;
  int16_t left_forward;
  int16_t sum_all;
  int16_t sum_forward;
} raspimouse_msgs__msg__LightSensors;

// Struct for a sequence of raspimouse_msgs__msg__LightSensors.
typedef struct raspimouse_msgs__msg__LightSensors__Sequence
{
  raspimouse_msgs__msg__LightSensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__msg__LightSensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__STRUCT_H_
