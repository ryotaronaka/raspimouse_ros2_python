// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from light_sensor_values:msg/LightSensorValues.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__STRUCT_H_
#define LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LightSensorValues in the package light_sensor_values.
typedef struct light_sensor_values__msg__LightSensorValues
{
  int16_t right_forward;
  int16_t right_side;
  int16_t left_side;
  int16_t left_forward;
  int16_t sum_all;
  int16_t sum_forward;
} light_sensor_values__msg__LightSensorValues;

// Struct for a sequence of light_sensor_values__msg__LightSensorValues.
typedef struct light_sensor_values__msg__LightSensorValues__Sequence
{
  light_sensor_values__msg__LightSensorValues * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} light_sensor_values__msg__LightSensorValues__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__STRUCT_H_
