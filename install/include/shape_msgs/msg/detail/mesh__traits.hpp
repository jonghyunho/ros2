// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg\Mesh.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_

#include "shape_msgs/msg/detail/mesh__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'triangles'
#include "shape_msgs/msg/detail/mesh_triangle__traits.hpp"
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const shape_msgs::msg::Mesh & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: triangles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.triangles.size() == 0) {
      out << "triangles: []\n";
    } else {
      out << "triangles:\n";
      for (auto item : msg.triangles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices.size() == 0) {
      out << "vertices: []\n";
    } else {
      out << "vertices:\n";
      for (auto item : msg.vertices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const shape_msgs::msg::Mesh & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<shape_msgs::msg::Mesh>()
{
  return "shape_msgs::msg::Mesh";
}

template<>
inline const char * name<shape_msgs::msg::Mesh>()
{
  return "shape_msgs/msg/Mesh";
}

template<>
struct has_fixed_size<shape_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shape_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shape_msgs::msg::Mesh>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
