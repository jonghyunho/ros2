// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2cli_test_interfaces:srv\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__rosidl_typesupport_introspection_c.h"
#include "ros2cli_test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__functions.h"
#include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__struct.h"


// Include directives for member types
// Member `short_varied_nested`
#include "ros2cli_test_interfaces/msg/short_varied_nested.h"
// Member `short_varied_nested`
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__init(message_memory);
}

void ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_fini_function(void * message_memory)
{
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_member_array[1] = {
  {
    "short_varied_nested",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request, short_varied_nested),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_members = {
  "ros2cli_test_interfaces__srv",  // message namespace
  "ShortVariedMultiNested_Request",  // message name
  1,  // number of fields
  sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Request),
  ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_member_array,  // message members
  ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_type_support_handle = {
  0,
  &ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2cli_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, srv, ShortVariedMultiNested_Request)() {
  ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, msg, ShortVariedNested)();
  if (!ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_type_support_handle.typesupport_identifier) {
    ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShortVariedMultiNested_Request__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2cli_test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__functions.h"
// already included above
// #include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__init(message_memory);
}

void ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_fini_function(void * message_memory)
{
  ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_member_array[1] = {
  {
    "bool_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response, bool_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_members = {
  "ros2cli_test_interfaces__srv",  // message namespace
  "ShortVariedMultiNested_Response",  // message name
  1,  // number of fields
  sizeof(ros2cli_test_interfaces__srv__ShortVariedMultiNested_Response),
  ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_member_array,  // message members
  ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_type_support_handle = {
  0,
  &ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2cli_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, srv, ShortVariedMultiNested_Response)() {
  if (!ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_type_support_handle.typesupport_identifier) {
    ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShortVariedMultiNested_Response__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2cli_test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_service_members = {
  "ros2cli_test_interfaces__srv",  // service namespace
  "ShortVariedMultiNested",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Request_message_type_support_handle,
  NULL  // response message
  // ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_service_type_support_handle = {
  0,
  &ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, srv, ShortVariedMultiNested_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, srv, ShortVariedMultiNested_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2cli_test_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, srv, ShortVariedMultiNested)() {
  if (!ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_service_type_support_handle.typesupport_identifier) {
    ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, srv, ShortVariedMultiNested_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2cli_test_interfaces, srv, ShortVariedMultiNested_Response)()->data;
  }

  return &ros2cli_test_interfaces__srv__detail__short_varied_multi_nested__rosidl_typesupport_introspection_c__ShortVariedMultiNested_service_type_support_handle;
}
