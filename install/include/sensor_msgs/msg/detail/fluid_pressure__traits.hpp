// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\FluidPressure.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__TRAITS_HPP_

#include "sensor_msgs/msg/detail/fluid_pressure__struct.hpp"
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
  const sensor_msgs::msg::FluidPressure & msg,
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

  // member: fluid_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fluid_pressure: ";
    value_to_yaml(msg.fluid_pressure, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    value_to_yaml(msg.variance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::FluidPressure & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::FluidPressure>()
{
  return "sensor_msgs::msg::FluidPressure";
}

template<>
inline const char * name<sensor_msgs::msg::FluidPressure>()
{
  return "sensor_msgs/msg/FluidPressure";
}

template<>
struct has_fixed_size<sensor_msgs::msg::FluidPressure>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::FluidPressure>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sensor_msgs::msg::FluidPressure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__TRAITS_HPP_
