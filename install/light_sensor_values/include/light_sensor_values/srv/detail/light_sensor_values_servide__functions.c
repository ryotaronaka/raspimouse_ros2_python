// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from light_sensor_values:srv/LightSensorValuesServide.idl
// generated code does not contain a copyright notice
#include "light_sensor_values/srv/detail/light_sensor_values_servide__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
light_sensor_values__srv__LightSensorValuesServide_Request__init(light_sensor_values__srv__LightSensorValuesServide_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  // d
  return true;
}

void
light_sensor_values__srv__LightSensorValuesServide_Request__fini(light_sensor_values__srv__LightSensorValuesServide_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
  // d
}

light_sensor_values__srv__LightSensorValuesServide_Request *
light_sensor_values__srv__LightSensorValuesServide_Request__create()
{
  light_sensor_values__srv__LightSensorValuesServide_Request * msg = (light_sensor_values__srv__LightSensorValuesServide_Request *)malloc(sizeof(light_sensor_values__srv__LightSensorValuesServide_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(light_sensor_values__srv__LightSensorValuesServide_Request));
  bool success = light_sensor_values__srv__LightSensorValuesServide_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
light_sensor_values__srv__LightSensorValuesServide_Request__destroy(light_sensor_values__srv__LightSensorValuesServide_Request * msg)
{
  if (msg) {
    light_sensor_values__srv__LightSensorValuesServide_Request__fini(msg);
  }
  free(msg);
}


bool
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__init(light_sensor_values__srv__LightSensorValuesServide_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  light_sensor_values__srv__LightSensorValuesServide_Request * data = NULL;
  if (size) {
    data = (light_sensor_values__srv__LightSensorValuesServide_Request *)calloc(size, sizeof(light_sensor_values__srv__LightSensorValuesServide_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = light_sensor_values__srv__LightSensorValuesServide_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        light_sensor_values__srv__LightSensorValuesServide_Request__fini(&data[i - 1]);
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
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__fini(light_sensor_values__srv__LightSensorValuesServide_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      light_sensor_values__srv__LightSensorValuesServide_Request__fini(&array->data[i]);
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

light_sensor_values__srv__LightSensorValuesServide_Request__Sequence *
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__create(size_t size)
{
  light_sensor_values__srv__LightSensorValuesServide_Request__Sequence * array = (light_sensor_values__srv__LightSensorValuesServide_Request__Sequence *)malloc(sizeof(light_sensor_values__srv__LightSensorValuesServide_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__destroy(light_sensor_values__srv__LightSensorValuesServide_Request__Sequence * array)
{
  if (array) {
    light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__fini(array);
  }
  free(array);
}


bool
light_sensor_values__srv__LightSensorValuesServide_Response__init(light_sensor_values__srv__LightSensorValuesServide_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
light_sensor_values__srv__LightSensorValuesServide_Response__fini(light_sensor_values__srv__LightSensorValuesServide_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

light_sensor_values__srv__LightSensorValuesServide_Response *
light_sensor_values__srv__LightSensorValuesServide_Response__create()
{
  light_sensor_values__srv__LightSensorValuesServide_Response * msg = (light_sensor_values__srv__LightSensorValuesServide_Response *)malloc(sizeof(light_sensor_values__srv__LightSensorValuesServide_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(light_sensor_values__srv__LightSensorValuesServide_Response));
  bool success = light_sensor_values__srv__LightSensorValuesServide_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
light_sensor_values__srv__LightSensorValuesServide_Response__destroy(light_sensor_values__srv__LightSensorValuesServide_Response * msg)
{
  if (msg) {
    light_sensor_values__srv__LightSensorValuesServide_Response__fini(msg);
  }
  free(msg);
}


bool
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__init(light_sensor_values__srv__LightSensorValuesServide_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  light_sensor_values__srv__LightSensorValuesServide_Response * data = NULL;
  if (size) {
    data = (light_sensor_values__srv__LightSensorValuesServide_Response *)calloc(size, sizeof(light_sensor_values__srv__LightSensorValuesServide_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = light_sensor_values__srv__LightSensorValuesServide_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        light_sensor_values__srv__LightSensorValuesServide_Response__fini(&data[i - 1]);
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
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__fini(light_sensor_values__srv__LightSensorValuesServide_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      light_sensor_values__srv__LightSensorValuesServide_Response__fini(&array->data[i]);
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

light_sensor_values__srv__LightSensorValuesServide_Response__Sequence *
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__create(size_t size)
{
  light_sensor_values__srv__LightSensorValuesServide_Response__Sequence * array = (light_sensor_values__srv__LightSensorValuesServide_Response__Sequence *)malloc(sizeof(light_sensor_values__srv__LightSensorValuesServide_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__destroy(light_sensor_values__srv__LightSensorValuesServide_Response__Sequence * array)
{
  if (array) {
    light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__fini(array);
  }
  free(array);
}
