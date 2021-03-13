// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\MagneticField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__TRAITS_HPP_

#include "sensor_msgs/msg/detail/magnetic_field__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::MagneticField & msg,
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

  // member: magnetic_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetic_field:\n";
    to_yaml(msg.magnetic_field, out, indentation + 2);
  }

  // member: magnetic_field_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.magnetic_field_covariance.size() == 0) {
      out << "magnetic_field_covariance: []\n";
    } else {
      out << "magnetic_field_covariance:\n";
      for (auto item : msg.magnetic_field_covariance) {
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

inline std::string to_yaml(const sensor_msgs::msg::MagneticField & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::MagneticField>()
{
  return "sensor_msgs::msg::MagneticField";
}

template<>
inline const char * name<sensor_msgs::msg::MagneticField>()
{
  return "sensor_msgs/msg/MagneticField";
}

template<>
struct has_fixed_size<sensor_msgs::msg::MagneticField>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::MagneticField>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sensor_msgs::msg::MagneticField>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__TRAITS_HPP_
