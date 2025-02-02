// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2cli_test_interfaces:msg\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2cli_test_interfaces/msg/detail/short_varied_multi_nested__rosidl_typesupport_introspection_c.h"
#include "ros2cli_test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2cli_test_interfaces/msg/detail/short_varied_multi_nested__functions.h"
#include "ros2cli_test_interfaces/msg/detail/short_varied_multi_nested__struct.h"


// Include directives for member types
// Member `short_varied_nested`
#include "ros2cli_test_interfaces/msg/short_varied_nested.h"
// Member `short_varied_nested`
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2cli_test_interfaces__msg__ShortVariedMultiNested__init(message_memory);
}

void ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_fini_function(void * message_memory)
{
  ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_member_array[1] = {
  {
    "short_varied_nested",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2cli_test_interfaces__msg__ShortVariedMultiNested, short_varied_nested),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_members = {
  "ros2cli_test_interfaces__msg",  // message namespace
  "ShortVariedMultiNested",  // message name
  1,  // number of fields
  sizeof(ros2cli_test_interfaces__msg__ShortVariedMultiNested),
  ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_member_array,  // message members
  ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_init_function,  // function to initialize message memory (memory has to be allocated)
  ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_type_support_handle = {
  0,
  &ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2cli_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, msg, ShortVariedMultiNested)() {
  ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, msg, ShortVariedNested)();
  if (!ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_type_support_handle.typesupport_identifier) {
    ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShortVariedMultiNested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
