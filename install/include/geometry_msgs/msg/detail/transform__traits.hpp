// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg\Transform.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__TRAITS_HPP_

#include "geometry_msgs/msg/detail/transform__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'rotation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const geometry_msgs::msg::Transform & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation:\n";
    to_yaml(msg.translation, out, indentation + 2);
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation:\n";
    to_yaml(msg.rotation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const geometry_msgs::msg::Transform & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<geometry_msgs::msg::Transform>()
{
  return "geometry_msgs::msg::Transform";
}

template<>
inline const char * name<geometry_msgs::msg::Transform>()
{
  return "geometry_msgs/msg/Transform";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Transform>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Transform>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<geometry_msgs::msg::Transform>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__TRAITS_HPP_
