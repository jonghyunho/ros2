// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:msg\OccupancyGridUpdate.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__DETAIL__OCCUPANCY_GRID_UPDATE__TRAITS_HPP_
#define MAP_MSGS__MSG__DETAIL__OCCUPANCY_GRID_UPDATE__TRAITS_HPP_

#include "map_msgs/msg/detail/occupancy_grid_update__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const map_msgs::msg::OccupancyGridUpdate & msg,
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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
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

inline std::string to_yaml(const map_msgs::msg::OccupancyGridUpdate & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<map_msgs::msg::OccupancyGridUpdate>()
{
  return "map_msgs::msg::OccupancyGridUpdate";
}

template<>
inline const char * name<map_msgs::msg::OccupancyGridUpdate>()
{
  return "map_msgs/msg/OccupancyGridUpdate";
}

template<>
struct has_fixed_size<map_msgs::msg::OccupancyGridUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::msg::OccupancyGridUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<map_msgs::msg::OccupancyGridUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__MSG__DETAIL__OCCUPANCY_GRID_UPDATE__TRAITS_HPP_
