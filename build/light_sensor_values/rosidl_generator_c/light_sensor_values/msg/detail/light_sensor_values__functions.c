// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from light_sensor_values:msg/LightSensorValues.idl
// generated code does not contain a copyright notice
#include "light_sensor_values/msg/detail/light_sensor_values__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
light_sensor_values__msg__LightSensorValues__init(light_sensor_values__msg__LightSensorValues * msg)
{
  if (!msg) {
    return false;
  }
  // right_forward
  // right_side
  // left_side
  // left_forward
  // sum_all
  // sum_forward
  return true;
}

void
light_sensor_values__msg__LightSensorValues__fini(light_sensor_values__msg__LightSensorValues * msg)
{
  if (!msg) {
    return;
  }
  // right_forward
  // right_side
  // left_side
  // left_forward
  // sum_all
  // sum_forward
}

light_sensor_values__msg__LightSensorValues *
light_sensor_values__msg__LightSensorValues__create()
{
  light_sensor_values__msg__LightSensorValues * msg = (light_sensor_values__msg__LightSensorValues *)malloc(sizeof(light_sensor_values__msg__LightSensorValues));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(light_sensor_values__msg__LightSensorValues));
  bool success = light_sensor_values__msg__LightSensorValues__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
light_sensor_values__msg__LightSensorValues__destroy(light_sensor_values__msg__LightSensorValues * msg)
{
  if (msg) {
    light_sensor_values__msg__LightSensorValues__fini(msg);
  }
  free(msg);
}


bool
light_sensor_values__msg__LightSensorValues__Sequence__init(light_sensor_values__msg__LightSensorValues__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  light_sensor_values__msg__LightSensorValues * data = NULL;
  if (size) {
    data = (light_sensor_values__msg__LightSensorValues *)calloc(size, sizeof(light_sensor_values__msg__LightSensorValues));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = light_sensor_values__msg__LightSensorValues__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        light_sensor_values__msg__LightSensorValues__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
light_sensor_values__msg__LightSensorValues__Sequence__fini(light_sensor_values__msg__LightSensorValues__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      light_sensor_values__msg__LightSensorValues__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

light_sensor_values__msg__LightSensorValues__Sequence *
light_sensor_values__msg__LightSensorValues__Sequence__create(size_t size)
{
  light_sensor_values__msg__LightSensorValues__Sequence * array = (light_sensor_values__msg__LightSensorValues__Sequence *)malloc(sizeof(light_sensor_values__msg__LightSensorValues__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = light_sensor_values__msg__LightSensorValues__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
light_sensor_values__msg__LightSensorValues__Sequence__destroy(light_sensor_values__msg__LightSensorValues__Sequence * array)
{
  if (array) {
    light_sensor_values__msg__LightSensorValues__Sequence__fini(array);
  }
  free(array);
}
