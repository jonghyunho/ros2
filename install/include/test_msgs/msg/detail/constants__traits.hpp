// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg\Constants.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__CONSTANTS__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__CONSTANTS__TRAITS_HPP_

#include "test_msgs/msg/detail/constants__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::msg::Constants & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const test_msgs::msg::Constants & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::msg::Constants>()
{
  return "test_msgs::msg::Constants";
}

template<>
inline const char * name<test_msgs::msg::Constants>()
{
  return "test_msgs/msg/Constants";
}

template<>
struct has_fixed_size<test_msgs::msg::Constants>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_msgs::msg::Constants>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_msgs::msg::Constants>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__CONSTANTS__TRAITS_HPP_
