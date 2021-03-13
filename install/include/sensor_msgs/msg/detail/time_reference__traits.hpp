// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\TimeReference.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__TRAITS_HPP_

#include "sensor_msgs/msg/detail/time_reference__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'time_ref'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::TimeReference & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: time_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_ref:\n";
    to_yaml(msg.time_ref, out, indentation + 2);
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    value_to_yaml(msg.source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::TimeReference & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::TimeReference>()
{
  return "sensor_msgs::msg::TimeReference";
}

template<>
inline const char * name<sensor_msgs::msg::TimeReference>()
{
  return "sensor_msgs/msg/TimeReference";
}

template<>
struct has_fixed_size<sensor_msgs::msg::TimeReference>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::TimeReference>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::TimeReference>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__TRAITS_HPP_
