// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\PointField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__TRAITS_HPP_

#include "sensor_msgs/msg/detail/point_field__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::PointField & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: datatype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datatype: ";
    value_to_yaml(msg.datatype, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::PointField & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::PointField>()
{
  return "sensor_msgs::msg::PointField";
}

template<>
inline const char * name<sensor_msgs::msg::PointField>()
{
  return "sensor_msgs/msg/PointField";
}

template<>
struct has_fixed_size<sensor_msgs::msg::PointField>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::PointField>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::PointField>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__TRAITS_HPP_
