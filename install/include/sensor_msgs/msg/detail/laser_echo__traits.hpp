// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\LaserEcho.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__TRAITS_HPP_

#include "sensor_msgs/msg/detail/laser_echo__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::LaserEcho & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: echoes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.echoes.size() == 0) {
      out << "echoes: []\n";
    } else {
      out << "echoes:\n";
      for (auto item : msg.echoes) {
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

inline std::string to_yaml(const sensor_msgs::msg::LaserEcho & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::LaserEcho>()
{
  return "sensor_msgs::msg::LaserEcho";
}

template<>
inline const char * name<sensor_msgs::msg::LaserEcho>()
{
  return "sensor_msgs/msg/LaserEcho";
}

template<>
struct has_fixed_size<sensor_msgs::msg::LaserEcho>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::LaserEcho>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::LaserEcho>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__TRAITS_HPP_
