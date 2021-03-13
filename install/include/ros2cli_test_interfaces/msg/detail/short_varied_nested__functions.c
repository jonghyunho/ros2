// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2cli_test_interfaces:msg\ShortVariedNested.idl
// generated code does not contain a copyright notice
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `short_varied`
#include "ros2cli_test_interfaces/msg/detail/short_varied__functions.h"

bool
ros2cli_test_interfaces__msg__ShortVariedNested__init(ros2cli_test_interfaces__msg__ShortVariedNested * msg)
{
  if (!msg) {
    return false;
  }
  // short_varied
  if (!ros2cli_test_interfaces__msg__ShortVaried__init(&msg->short_varied)) {
    ros2cli_test_interfaces__msg__ShortVariedNested__fini(msg);
    return false;
  }
  return true;
}

void
ros2cli_test_interfaces__msg__ShortVariedNested__fini(ros2cli_test_interfaces__msg__ShortVariedNested * msg)
{
  if (!msg) {
    return;
  }
  // short_varied
  ros2cli_test_interfaces__msg__ShortVaried__fini(&msg->short_varied);
}

ros2cli_test_interfaces__msg__ShortVariedNested *
ros2cli_test_interfaces__msg__ShortVariedNested__create()
{
  ros2cli_test_interfaces__msg__ShortVariedNested * msg = (ros2cli_test_interfaces__msg__ShortVariedNested *)malloc(sizeof(ros2cli_test_interfaces__msg__ShortVariedNested));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2cli_test_interfaces__msg__ShortVariedNested));
  bool success = ros2cli_test_interfaces__msg__ShortVariedNested__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2cli_test_interfaces__msg__ShortVariedNested__destroy(ros2cli_test_interfaces__msg__ShortVariedNested * msg)
{
  if (msg) {
    ros2cli_test_interfaces__msg__ShortVariedNested__fini(msg);
  }
  free(msg);
}


bool
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__init(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2cli_test_interfaces__msg__ShortVariedNested * data = NULL;
  if (size) {
    data = (ros2cli_test_interfaces__msg__ShortVariedNested *)calloc(size, sizeof(ros2cli_test_interfaces__msg__ShortVariedNested));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2cli_test_interfaces__msg__ShortVariedNested__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2cli_test_interfaces__msg__ShortVariedNested__fini(&data[i - 1]);
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
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__fini(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2cli_test_interfaces__msg__ShortVariedNested__fini(&array->data[i]);
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

ros2cli_test_interfaces__msg__ShortVariedNested__Sequence *
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__create(size_t size)
{
  ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array = (ros2cli_test_interfaces__msg__ShortVariedNested__Sequence *)malloc(sizeof(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__destroy(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array)
{
  if (array) {
    ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__fini(array);
  }
  free(array);
}
