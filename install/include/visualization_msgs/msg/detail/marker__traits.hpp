// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\Marker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_

#include "visualization_msgs/msg/detail/marker__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'color'
// Member 'colors'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::Marker & msg,
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

  // member: ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ns: ";
    value_to_yaml(msg.ns, out);
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale:\n";
    to_yaml(msg.scale, out, indentation + 2);
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_yaml(msg.color, out, indentation + 2);
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: frame_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_locked: ";
    value_to_yaml(msg.frame_locked, out);
    out << "\n";
  }

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

  // member: colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colors.size() == 0) {
      out << "colors: []\n";
    } else {
      out << "colors:\n";
      for (auto item : msg.colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: mesh_resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_resource: ";
    value_to_yaml(msg.mesh_resource, out);
    out << "\n";
  }

  // member: mesh_use_embedded_materials
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_use_embedded_materials: ";
    value_to_yaml(msg.mesh_use_embedded_materials, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::Marker & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::Marker>()
{
  return "visualization_msgs::msg::Marker";
}

template<>
inline const char * name<visualization_msgs::msg::Marker>()
{
  return "visualization_msgs/msg/Marker";
}

template<>
struct has_fixed_size<visualization_msgs::msg::Marker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::Marker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::Marker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
