// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\JoyFeedbackArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__TRAITS_HPP_

#include "sensor_msgs/msg/detail/joy_feedback_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'array'
#include "sensor_msgs/msg/detail/joy_feedback__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::JoyFeedbackArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array.size() == 0) {
      out << "array: []\n";
    } else {
      out << "array:\n";
      for (auto item : msg.array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::JoyFeedbackArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::JoyFeedbackArray>()
{
  return "sensor_msgs::msg::JoyFeedbackArray";
}

template<>
inline const char * name<sensor_msgs::msg::JoyFeedbackArray>()
{
  return "sensor_msgs/msg/JoyFeedbackArray";
}

template<>
struct has_fixed_size<sensor_msgs::msg::JoyFeedbackArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::JoyFeedbackArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::JoyFeedbackArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__TRAITS_HPP_
