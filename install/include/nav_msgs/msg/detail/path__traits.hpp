// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:msg\Path.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_
#define NAV_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_

#include "nav_msgs/msg/detail/path__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav_msgs::msg::Path & msg,
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

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav_msgs::msg::Path & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav_msgs::msg::Path>()
{
  return "nav_msgs::msg::Path";
}

template<>
inline const char * name<nav_msgs::msg::Path>()
{
  return "nav_msgs/msg/Path";
}

template<>
struct has_fixed_size<nav_msgs::msg::Path>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_msgs::msg::Path>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_msgs::msg::Path>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_
