// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\InteractiveMarkerInit.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__TRAITS_HPP_

#include "visualization_msgs/msg/detail/interactive_marker_init__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::InteractiveMarkerInit & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: server_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_id: ";
    value_to_yaml(msg.server_id, out);
    out << "\n";
  }

  // member: seq_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_num: ";
    value_to_yaml(msg.seq_num, out);
    out << "\n";
  }

  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::InteractiveMarkerInit & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarkerInit>()
{
  return "visualization_msgs::msg::InteractiveMarkerInit";
}

template<>
inline const char * name<visualization_msgs::msg::InteractiveMarkerInit>()
{
  return "visualization_msgs/msg/InteractiveMarkerInit";
}

template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerInit>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerInit>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::InteractiveMarkerInit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__TRAITS_HPP_
