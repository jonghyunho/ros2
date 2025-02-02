// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\JoyFeedback.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__TRAITS_HPP_

#include "sensor_msgs/msg/detail/joy_feedback__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::JoyFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intensity: ";
    value_to_yaml(msg.intensity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::JoyFeedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::JoyFeedback>()
{
  return "sensor_msgs::msg::JoyFeedback";
}

template<>
inline const char * name<sensor_msgs::msg::JoyFeedback>()
{
  return "sensor_msgs/msg/JoyFeedback";
}

template<>
struct has_fixed_size<sensor_msgs::msg::JoyFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_msgs::msg::JoyFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_msgs::msg::JoyFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__TRAITS_HPP_
