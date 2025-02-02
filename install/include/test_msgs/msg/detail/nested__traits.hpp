// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg\Nested.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__NESTED__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__NESTED__TRAITS_HPP_

#include "test_msgs/msg/detail/nested__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'basic_types_value'
#include "test_msgs/msg/detail/basic_types__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::msg::Nested & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: basic_types_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basic_types_value:\n";
    to_yaml(msg.basic_types_value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const test_msgs::msg::Nested & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::msg::Nested>()
{
  return "test_msgs::msg::Nested";
}

template<>
inline const char * name<test_msgs::msg::Nested>()
{
  return "test_msgs/msg/Nested";
}

template<>
struct has_fixed_size<test_msgs::msg::Nested>
  : std::integral_constant<bool, has_fixed_size<test_msgs::msg::BasicTypes>::value> {};

template<>
struct has_bounded_size<test_msgs::msg::Nested>
  : std::integral_constant<bool, has_bounded_size<test_msgs::msg::BasicTypes>::value> {};

template<>
struct is_message<test_msgs::msg::Nested>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__NESTED__TRAITS_HPP_
