// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg\Inertia.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_

#include "geometry_msgs/msg/detail/inertia__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const geometry_msgs::msg::Inertia & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m: ";
    value_to_yaml(msg.m, out);
    out << "\n";
  }

  // member: com
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com:\n";
    to_yaml(msg.com, out, indentation + 2);
  }

  // member: ixx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixx: ";
    value_to_yaml(msg.ixx, out);
    out << "\n";
  }

  // member: ixy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixy: ";
    value_to_yaml(msg.ixy, out);
    out << "\n";
  }

  // member: ixz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixz: ";
    value_to_yaml(msg.ixz, out);
    out << "\n";
  }

  // member: iyy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyy: ";
    value_to_yaml(msg.iyy, out);
    out << "\n";
  }

  // member: iyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyz: ";
    value_to_yaml(msg.iyz, out);
    out << "\n";
  }

  // member: izz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "izz: ";
    value_to_yaml(msg.izz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const geometry_msgs::msg::Inertia & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<geometry_msgs::msg::Inertia>()
{
  return "geometry_msgs::msg::Inertia";
}

template<>
inline const char * name<geometry_msgs::msg::Inertia>()
{
  return "geometry_msgs/msg/Inertia";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Inertia>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Inertia>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<geometry_msgs::msg::Inertia>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_
