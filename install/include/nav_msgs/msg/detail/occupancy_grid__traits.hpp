// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:msg\OccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__TRAITS_HPP_
#define NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__TRAITS_HPP_

#include "nav_msgs/msg/detail/occupancy_grid__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'info'
#include "nav_msgs/msg/detail/map_meta_data__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav_msgs::msg::OccupancyGrid & msg,
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

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_yaml(msg.info, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const nav_msgs::msg::OccupancyGrid & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav_msgs::msg::OccupancyGrid>()
{
  return "nav_msgs::msg::OccupancyGrid";
}

template<>
inline const char * name<nav_msgs::msg::OccupancyGrid>()
{
  return "nav_msgs/msg/OccupancyGrid";
}

template<>
struct has_fixed_size<nav_msgs::msg::OccupancyGrid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_msgs::msg::OccupancyGrid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_msgs::msg::OccupancyGrid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__TRAITS_HPP_
