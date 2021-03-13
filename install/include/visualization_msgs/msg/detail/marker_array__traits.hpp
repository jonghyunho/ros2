// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\MarkerArray.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__TRAITS_HPP_

#include "visualization_msgs/msg/detail/marker_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::MarkerArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::MarkerArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::MarkerArray>()
{
  return "visualization_msgs::msg::MarkerArray";
}

template<>
inline const char * name<visualization_msgs::msg::MarkerArray>()
{
  return "visualization_msgs/msg/MarkerArray";
}

template<>
struct has_fixed_size<visualization_msgs::msg::MarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::MarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::MarkerArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__TRAITS_HPP_
