// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trajectory_msgs:msg\JointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__TRAITS_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__TRAITS_HPP_

#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const trajectory_msgs::msg::JointTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accelerations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerations.size() == 0) {
      out << "accelerations: []\n";
    } else {
      out << "accelerations:\n";
      for (auto item : msg.accelerations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.effort.size() == 0) {
      out << "effort: []\n";
    } else {
      out << "effort:\n";
      for (auto item : msg.effort) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_from_start:\n";
    to_yaml(msg.time_from_start, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const trajectory_msgs::msg::JointTrajectoryPoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<trajectory_msgs::msg::JointTrajectoryPoint>()
{
  return "trajectory_msgs::msg::JointTrajectoryPoint";
}

template<>
inline const char * name<trajectory_msgs::msg::JointTrajectoryPoint>()
{
  return "trajectory_msgs/msg/JointTrajectoryPoint";
}

template<>
struct has_fixed_size<trajectory_msgs::msg::JointTrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<trajectory_msgs::msg::JointTrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<trajectory_msgs::msg::JointTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__TRAITS_HPP_
