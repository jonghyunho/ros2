// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:msg\GridCells.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__GRID_CELLS__TRAITS_HPP_
#define NAV_MSGS__MSG__DETAIL__GRID_CELLS__TRAITS_HPP_

#include "nav_msgs/msg/detail/grid_cells__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cells'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav_msgs::msg::GridCells & msg,
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

  // member: cell_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_width: ";
    value_to_yaml(msg.cell_width, out);
    out << "\n";
  }

  // member: cell_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_height: ";
    value_to_yaml(msg.cell_height, out);
    out << "\n";
  }

  // member: cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cells.size() == 0) {
      out << "cells: []\n";
    } else {
      out << "cells:\n";
      for (auto item : msg.cells) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav_msgs::msg::GridCells & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav_msgs::msg::GridCells>()
{
  return "nav_msgs::msg::GridCells";
}

template<>
inline const char * name<nav_msgs::msg::GridCells>()
{
  return "nav_msgs/msg/GridCells";
}

template<>
struct has_fixed_size<nav_msgs::msg::GridCells>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_msgs::msg::GridCells>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_msgs::msg::GridCells>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__MSG__DETAIL__GRID_CELLS__TRAITS_HPP_
