// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trajectory_msgs:msg\MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_

#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform__traits.hpp"
// Member 'velocities'
// Member 'accelerations'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transforms.size() == 0) {
      out << "transforms: []\n";
    } else {
      out << "transforms:\n";
      for (auto item : msg.transforms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
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
        out << "-\n";
        to_yaml(item, out, indentation + 2);
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
        out << "-\n";
        to_yaml(item, out, indentation + 2);
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

inline std::string to_yaml(const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>()
{
  return "trajectory_msgs::msg::MultiDOFJointTrajectoryPoint";
}

template<>
inline const char * name<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>()
{
  return "trajectory_msgs/msg/MultiDOFJointTrajectoryPoint";
}

template<>
struct has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
