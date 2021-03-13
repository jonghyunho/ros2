// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg\Builtins.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__BUILTINS__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__BUILTINS__TRAITS_HPP_

#include "test_msgs/msg/detail/builtins__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'duration_value'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'time_value'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::msg::Builtins & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_value:\n";
    to_yaml(msg.duration_value, out, indentation + 2);
  }

  // member: time_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_value:\n";
    to_yaml(msg.time_value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const test_msgs::msg::Builtins & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::msg::Builtins>()
{
  return "test_msgs::msg::Builtins";
}

template<>
inline const char * name<test_msgs::msg::Builtins>()
{
  return "test_msgs/msg/Builtins";
}

template<>
struct has_fixed_size<test_msgs::msg::Builtins>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<test_msgs::msg::Builtins>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<test_msgs::msg::Builtins>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__BUILTINS__TRAITS_HPP_
