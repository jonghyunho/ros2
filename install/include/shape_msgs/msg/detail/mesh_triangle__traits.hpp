// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg\MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_

#include "shape_msgs/msg/detail/mesh_triangle__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const shape_msgs::msg::MeshTriangle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vertex_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_indices.size() == 0) {
      out << "vertex_indices: []\n";
    } else {
      out << "vertex_indices:\n";
      for (auto item : msg.vertex_indices) {
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

inline std::string to_yaml(const shape_msgs::msg::MeshTriangle & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<shape_msgs::msg::MeshTriangle>()
{
  return "shape_msgs::msg::MeshTriangle";
}

template<>
inline const char * name<shape_msgs::msg::MeshTriangle>()
{
  return "shape_msgs/msg/MeshTriangle";
}

template<>
struct has_fixed_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shape_msgs::msg::MeshTriangle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_
