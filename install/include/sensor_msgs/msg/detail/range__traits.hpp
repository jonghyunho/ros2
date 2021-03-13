// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\Range.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_

#include "sensor_msgs/msg/detail/range__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::Range & msg,
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

  // member: radiation_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radiation_type: ";
    value_to_yaml(msg.radiation_type, out);
    out << "\n";
  }

  // member: field_of_view
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field_of_view: ";
    value_to_yaml(msg.field_of_view, out);
    out << "\n";
  }

  // member: min_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_range: ";
    value_to_yaml(msg.min_range, out);
    out << "\n";
  }

  // member: max_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_range: ";
    value_to_yaml(msg.max_range, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    value_to_yaml(msg.range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::Range & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::Range>()
{
  return "sensor_msgs::msg::Range";
}

template<>
inline const char * name<sensor_msgs::msg::Range>()
{
  return "sensor_msgs/msg/Range";
}

template<>
struct has_fixed_size<sensor_msgs::msg::Range>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::Range>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sensor_msgs::msg::Range>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_
