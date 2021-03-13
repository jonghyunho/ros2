// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2cli_test_interfaces:msg\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice
#include "ros2cli_test_interfaces/msg/detail/short_varied_multi_nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `short_varied_nested`
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__functions.h"

bool
ros2cli_test_interfaces__msg__ShortVariedMultiNested__init(ros2cli_test_interfaces__msg__ShortVariedMultiNested * msg)
{
  if (!msg) {
    return false;
  }
  // short_varied_nested
  if (!ros2cli_test_interfaces__msg__ShortVariedNested__init(&msg->short_varied_nested)) {
    ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini(msg);
    return false;
  }
  return true;
}

void
ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini(ros2cli_test_interfaces__msg__ShortVariedMultiNested * msg)
{
  if (!msg) {
    return;
  }
  // short_varied_nested
  ros2cli_test_interfaces__msg__ShortVariedNested__fini(&msg->short_varied_nested);
}

ros2cli_test_interfaces__msg__ShortVariedMultiNested *
ros2cli_test_interfaces__msg__ShortVariedMultiNested__create()
{
  ros2cli_test_interfaces__msg__ShortVariedMultiNested * msg = (ros2cli_test_interfaces__msg__ShortVariedMultiNested *)malloc(sizeof(ros2cli_test_interfaces__msg__ShortVariedMultiNested));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2cli_test_interfaces__msg__ShortVariedMultiNested));
  bool success = ros2cli_test_interfaces__msg__ShortVariedMultiNested__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2cli_test_interfaces__msg__ShortVariedMultiNested__destroy(ros2cli_test_interfaces__msg__ShortVariedMultiNested * msg)
{
  if (msg) {
    ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini(msg);
  }
  free(msg);
}


bool
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__init(ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2cli_test_interfaces__msg__ShortVariedMultiNested * data = NULL;
  if (size) {
    data = (ros2cli_test_interfaces__msg__ShortVariedMultiNested *)calloc(size, sizeof(ros2cli_test_interfaces__msg__ShortVariedMultiNested));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2cli_test_interfaces__msg__ShortVariedMultiNested__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini(&data[i - 1]);
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
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__fini(ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini(&array->data[i]);
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

ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence *
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__create(size_t size)
{
  ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence * array = (ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence *)malloc(sizeof(ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__destroy(ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence * array)
{
  if (array) {
    ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__fini(array);
  }
  free(array);
}
