// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2cli_test_interfaces:msg\ShortVaried.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2cli_test_interfaces/msg/detail/short_varied__rosidl_typesupport_introspection_c.h"
#include "ros2cli_test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2cli_test_interfaces/msg/detail/short_varied__functions.h"
#include "ros2cli_test_interfaces/msg/detail/short_varied__struct.h"


// Include directives for member types
// Member `bool_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2cli_test_interfaces__msg__ShortVaried__init(message_memory);
}

void ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_fini_function(void * message_memory)
{
  ros2cli_test_interfaces__msg__ShortVaried__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_member_array[2] = {
  {
    "bool_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2cli_test_interfaces__msg__ShortVaried, bool_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bool_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(ros2cli_test_interfaces__msg__ShortVaried, bool_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_members = {
  "ros2cli_test_interfaces__msg",  // message namespace
  "ShortVaried",  // message name
  2,  // number of fields
  sizeof(ros2cli_test_interfaces__msg__ShortVaried),
  ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_member_array,  // message members
  ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_init_function,  // function to initialize message memory (memory has to be allocated)
  ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_type_support_handle = {
  0,
  &ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2cli_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, msg, ShortVaried)() {
  if (!ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_type_support_handle.typesupport_identifier) {
    ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShortVaried__rosidl_typesupport_introspection_c__ShortVaried_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
