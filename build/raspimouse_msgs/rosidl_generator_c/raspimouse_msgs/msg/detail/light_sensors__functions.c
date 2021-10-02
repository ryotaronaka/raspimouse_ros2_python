// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raspimouse_msgs:msg/LightSensors.idl
// generated code does not contain a copyright notice
#include "raspimouse_msgs/msg/detail/light_sensors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
raspimouse_msgs__msg__LightSensors__init(raspimouse_msgs__msg__LightSensors * msg)
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
raspimouse_msgs__msg__LightSensors__fini(raspimouse_msgs__msg__LightSensors * msg)
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

raspimouse_msgs__msg__LightSensors *
raspimouse_msgs__msg__LightSensors__create()
{
  raspimouse_msgs__msg__LightSensors * msg = (raspimouse_msgs__msg__LightSensors *)malloc(sizeof(raspimouse_msgs__msg__LightSensors));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__msg__LightSensors));
  bool success = raspimouse_msgs__msg__LightSensors__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__msg__LightSensors__destroy(raspimouse_msgs__msg__LightSensors * msg)
{
  if (msg) {
    raspimouse_msgs__msg__LightSensors__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__msg__LightSensors__Sequence__init(raspimouse_msgs__msg__LightSensors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__msg__LightSensors * data = NULL;
  if (size) {
    data = (raspimouse_msgs__msg__LightSensors *)calloc(size, sizeof(raspimouse_msgs__msg__LightSensors));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__msg__LightSensors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__msg__LightSensors__fini(&data[i - 1]);
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
raspimouse_msgs__msg__LightSensors__Sequence__fini(raspimouse_msgs__msg__LightSensors__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__msg__LightSensors__fini(&array->data[i]);
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

raspimouse_msgs__msg__LightSensors__Sequence *
raspimouse_msgs__msg__LightSensors__Sequence__create(size_t size)
{
  raspimouse_msgs__msg__LightSensors__Sequence * array = (raspimouse_msgs__msg__LightSensors__Sequence *)malloc(sizeof(raspimouse_msgs__msg__LightSensors__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__msg__LightSensors__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__msg__LightSensors__Sequence__destroy(raspimouse_msgs__msg__LightSensors__Sequence * array)
{
  if (array) {
    raspimouse_msgs__msg__LightSensors__Sequence__fini(array);
  }
  free(array);
}
