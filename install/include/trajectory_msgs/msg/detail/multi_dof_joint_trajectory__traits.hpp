// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trajectory_msgs:msg\MultiDOFJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__TRAITS_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__TRAITS_HPP_

#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'points'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const trajectory_msgs::msg::MultiDOFJointTrajectory & msg,
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

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const trajectory_msgs::msg::MultiDOFJointTrajectory & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<trajectory_msgs::msg::MultiDOFJointTrajectory>()
{
  return "trajectory_msgs::msg::MultiDOFJointTrajectory";
}

template<>
inline const char * name<trajectory_msgs::msg::MultiDOFJointTrajectory>()
{
  return "trajectory_msgs/msg/MultiDOFJointTrajectory";
}

template<>
struct has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<trajectory_msgs::msg::MultiDOFJointTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__TRAITS_HPP_
