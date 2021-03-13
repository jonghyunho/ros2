// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2cli_test_interfaces:msg\ShortVaried.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2cli_test_interfaces/msg/detail/short_varied__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2cli_test_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ShortVaried_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2cli_test_interfaces::msg::ShortVaried(_init);
}

void ShortVaried_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2cli_test_interfaces::msg::ShortVaried *>(message_memory);
  typed_message->~ShortVaried();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ShortVaried_message_member_array[2] = {
  {
    "bool_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2cli_test_interfaces::msg::ShortVaried, bool_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bool_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(ros2cli_test_interfaces::msg::ShortVaried, bool_values),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ShortVaried_message_members = {
  "ros2cli_test_interfaces::msg",  // message namespace
  "ShortVaried",  // message name
  2,  // number of fields
  sizeof(ros2cli_test_interfaces::msg::ShortVaried),
  ShortVaried_message_member_array,  // message members
  ShortVaried_init_function,  // function to initialize message memory (memory has to be allocated)
  ShortVaried_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ShortVaried_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ShortVaried_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2cli_test_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2cli_test_interfaces::msg::ShortVaried>()
{
  return &::ros2cli_test_interfaces::msg::rosidl_typesupport_introspection_cpp::ShortVaried_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2cli_test_interfaces, msg, ShortVaried)() {
  return &::ros2cli_test_interfaces::msg::rosidl_typesupport_introspection_cpp::ShortVaried_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
