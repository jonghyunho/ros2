// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg\Polygon.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POLYGON__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POLYGON__TRAITS_HPP_

#include "geometry_msgs/msg/detail/polygon__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point32__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const geometry_msgs::msg::Polygon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const geometry_msgs::msg::Polygon & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<geometry_msgs::msg::Polygon>()
{
  return "geometry_msgs::msg::Polygon";
}

template<>
inline const char * name<geometry_msgs::msg::Polygon>()
{
  return "geometry_msgs/msg/Polygon";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Polygon>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Polygon>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geometry_msgs::msg::Polygon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POLYGON__TRAITS_HPP_
