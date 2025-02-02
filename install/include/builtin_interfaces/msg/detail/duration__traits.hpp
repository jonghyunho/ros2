// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from builtin_interfaces:msg\Duration.idl
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__DETAIL__DURATION__TRAITS_HPP_
#define BUILTIN_INTERFACES__MSG__DETAIL__DURATION__TRAITS_HPP_

#include "builtin_interfaces/msg/detail/duration__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const builtin_interfaces::msg::Duration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec: ";
    value_to_yaml(msg.sec, out);
    out << "\n";
  }

  // member: nanosec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nanosec: ";
    value_to_yaml(msg.nanosec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const builtin_interfaces::msg::Duration & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<builtin_interfaces::msg::Duration>()
{
  return "builtin_interfaces::msg::Duration";
}

template<>
inline const char * name<builtin_interfaces::msg::Duration>()
{
  return "builtin_interfaces/msg/Duration";
}

template<>
struct has_fixed_size<builtin_interfaces::msg::Duration>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<builtin_interfaces::msg::Duration>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<builtin_interfaces::msg::Duration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUILTIN_INTERFACES__MSG__DETAIL__DURATION__TRAITS_HPP_
