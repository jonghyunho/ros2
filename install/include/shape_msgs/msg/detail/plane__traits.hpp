// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg\Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__PLANE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__DETAIL__PLANE__TRAITS_HPP_

#include "shape_msgs/msg/detail/plane__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const shape_msgs::msg::Plane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coef.size() == 0) {
      out << "coef: []\n";
    } else {
      out << "coef:\n";
      for (auto item : msg.coef) {
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

inline std::string to_yaml(const shape_msgs::msg::Plane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<shape_msgs::msg::Plane>()
{
  return "shape_msgs::msg::Plane";
}

template<>
inline const char * name<shape_msgs::msg::Plane>()
{
  return "shape_msgs/msg/Plane";
}

template<>
struct has_fixed_size<shape_msgs::msg::Plane>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_msgs::msg::Plane>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shape_msgs::msg::Plane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__DETAIL__PLANE__TRAITS_HPP_
