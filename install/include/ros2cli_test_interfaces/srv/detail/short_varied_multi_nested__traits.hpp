// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2cli_test_interfaces:srv\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__SRV__DETAIL__SHORT_VARIED_MULTI_NESTED__TRAITS_HPP_
#define ROS2CLI_TEST_INTERFACES__SRV__DETAIL__SHORT_VARIED_MULTI_NESTED__TRAITS_HPP_

#include "ros2cli_test_interfaces/srv/detail/short_varied_multi_nested__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'short_varied_nested'
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: short_varied_nested
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "short_varied_nested:\n";
    to_yaml(msg.short_varied_nested, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>()
{
  return "ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request";
}

template<>
inline const char * name<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>()
{
  return "ros2cli_test_interfaces/srv/ShortVariedMultiNested_Request";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>
  : std::integral_constant<bool, has_fixed_size<ros2cli_test_interfaces::msg::ShortVariedNested>::value> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>
  : std::integral_constant<bool, has_bounded_size<ros2cli_test_interfaces::msg::ShortVariedNested>::value> {};

template<>
struct is_message<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_value: ";
    value_to_yaml(msg.bool_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>()
{
  return "ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response";
}

template<>
inline const char * name<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>()
{
  return "ros2cli_test_interfaces/srv/ShortVariedMultiNested_Response";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2cli_test_interfaces::srv::ShortVariedMultiNested>()
{
  return "ros2cli_test_interfaces::srv::ShortVariedMultiNested";
}

template<>
inline const char * name<ros2cli_test_interfaces::srv::ShortVariedMultiNested>()
{
  return "ros2cli_test_interfaces/srv/ShortVariedMultiNested";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>::value &&
    has_fixed_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>::value &&
    has_bounded_size<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>::value
  >
{
};

template<>
struct is_service<ros2cli_test_interfaces::srv::ShortVariedMultiNested>
  : std::true_type
{
};

template<>
struct is_service_request<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2cli_test_interfaces::srv::ShortVariedMultiNested_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2CLI_TEST_INTERFACES__SRV__DETAIL__SHORT_VARIED_MULTI_NESTED__TRAITS_HPP_
