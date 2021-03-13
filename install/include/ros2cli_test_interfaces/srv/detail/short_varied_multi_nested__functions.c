// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2cli_test_interfaces:srv\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice
#include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `short_varied_nested`
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__functions.h"

bool
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__init(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request * msg)
{
  if (!msg) {
    return false;
  }
  // short_varied_nested
  if (!ros2cli_test_interfaces__msg__ShortVariedNested__init(&msg->short_varied_nested)) {
    ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__fini(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request * msg)
{
  if (!msg) {
    return;
  }
  // short_varied_nested
  ros2cli_test_interfaces__msg__ShortVariedNested__fini(&msg->short_varied_nested);
}

ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request *
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__create()
{
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request * msg = (ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request *)malloc(sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request));
  bool success = ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__destroy(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request * msg)
{
  if (msg) {
    ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__fini(msg);
  }
  free(msg);
}


bool
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence__init(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request * data = NULL;
  if (size) {
    data = (ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request *)calloc(size, sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__fini(&data[i - 1]);
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
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence__fini(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__fini(&array->data[i]);
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

ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence *
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence__create(size_t size)
{
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence * array = (ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence *)malloc(sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence__destroy(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence * array)
{
  if (array) {
    ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__Sequence__fini(array);
  }
  free(array);
}


bool
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__init(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response * msg)
{
  if (!msg) {
    return false;
  }
  // bool_value
  return true;
}

void
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__fini(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response * msg)
{
  if (!msg) {
    return;
  }
  // bool_value
}

ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response *
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__create()
{
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response * msg = (ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response *)malloc(sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response));
  bool success = ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__destroy(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response * msg)
{
  if (msg) {
    ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__fini(msg);
  }
  free(msg);
}


bool
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence__init(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response * data = NULL;
  if (size) {
    data = (ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response *)calloc(size, sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__fini(&data[i - 1]);
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
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence__fini(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__fini(&array->data[i]);
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

ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence *
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence__create(size_t size)
{
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence * array = (ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence *)malloc(sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence__destroy(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence * array)
{
  if (array) {
    ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__Sequence__fini(array);
  }
  free(array);
}
