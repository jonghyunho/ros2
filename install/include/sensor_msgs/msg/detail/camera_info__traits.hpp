// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_

#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::CameraInfo & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
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

  // member: distortion_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distortion_model: ";
    value_to_yaml(msg.distortion_model, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.d.size() == 0) {
      out << "d: []\n";
    } else {
      out << "d:\n";
      for (auto item : msg.d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.k.size() == 0) {
      out << "k: []\n";
    } else {
      out << "k:\n";
      for (auto item : msg.k) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.r.size() == 0) {
      out << "r: []\n";
    } else {
      out << "r:\n";
      for (auto item : msg.r) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.p.size() == 0) {
      out << "p: []\n";
    } else {
      out << "p:\n";
      for (auto item : msg.p) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: binning_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "binning_x: ";
    value_to_yaml(msg.binning_x, out);
    out << "\n";
  }

  // member: binning_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "binning_y: ";
    value_to_yaml(msg.binning_y, out);
    out << "\n";
  }

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::CameraInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::CameraInfo>()
{
  return "sensor_msgs::msg::CameraInfo";
}

template<>
inline const char * name<sensor_msgs::msg::CameraInfo>()
{
  return "sensor_msgs/msg/CameraInfo";
}

template<>
struct has_fixed_size<sensor_msgs::msg::CameraInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::CameraInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::CameraInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
