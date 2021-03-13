// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2cli_test_interfaces:msg\ShortVaried.idl
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED__TRAITS_HPP_
#define ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED__TRAITS_HPP_

#include "ros2cli_test_interfaces/msg/detail/short_varied__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::msg::ShortVaried & msg,
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

  // member: bool_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values.size() == 0) {
      out << "bool_values: []\n";
    } else {
      out << "bool_values:\n";
      for (auto item : msg.bool_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::msg::ShortVaried & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::msg::ShortVaried>()
{
  return "ros2cli_test_interfaces::msg::ShortVaried";
}

template<>
inline const char * name<ros2cli_test_interfaces::msg::ShortVaried>()
{
  return "ros2cli_test_interfaces/msg/ShortVaried";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::msg::ShortVaried>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::msg::ShortVaried>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2cli_test_interfaces::msg::ShortVaried>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED__TRAITS_HPP_
