// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from composition_interfaces:srv\LoadNode.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__LOAD_NODE__TRAITS_HPP_
#define COMPOSITION_INTERFACES__SRV__DETAIL__LOAD_NODE__TRAITS_HPP_

#include "composition_interfaces/srv/detail/load_node__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'parameters'
// Member 'extra_arguments'
#include "rcl_interfaces/msg/detail/parameter__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const composition_interfaces::srv::LoadNode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: package_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "package_name: ";
    value_to_yaml(msg.package_name, out);
    out << "\n";
  }

  // member: plugin_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plugin_name: ";
    value_to_yaml(msg.plugin_name, out);
    out << "\n";
  }

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: node_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_namespace: ";
    value_to_yaml(msg.node_namespace, out);
    out << "\n";
  }

  // member: log_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_level: ";
    value_to_yaml(msg.log_level, out);
    out << "\n";
  }

  // member: remap_rules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.remap_rules.size() == 0) {
      out << "remap_rules: []\n";
    } else {
      out << "remap_rules:\n";
      for (auto item : msg.remap_rules) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameters.size() == 0) {
      out << "parameters: []\n";
    } else {
      out << "parameters:\n";
      for (auto item : msg.parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: extra_arguments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra_arguments.size() == 0) {
      out << "extra_arguments: []\n";
    } else {
      out << "extra_arguments:\n";
      for (auto item : msg.extra_arguments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const composition_interfaces::srv::LoadNode_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<composition_interfaces::srv::LoadNode_Request>()
{
  return "composition_interfaces::srv::LoadNode_Request";
}

template<>
inline const char * name<composition_interfaces::srv::LoadNode_Request>()
{
  return "composition_interfaces/srv/LoadNode_Request";
}

template<>
struct has_fixed_size<composition_interfaces::srv::LoadNode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<composition_interfaces::srv::LoadNode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<composition_interfaces::srv::LoadNode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const composition_interfaces::srv::LoadNode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: full_node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_node_name: ";
    value_to_yaml(msg.full_node_name, out);
    out << "\n";
  }

  // member: unique_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_id: ";
    value_to_yaml(msg.unique_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const composition_interfaces::srv::LoadNode_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<composition_interfaces::srv::LoadNode_Response>()
{
  return "composition_interfaces::srv::LoadNode_Response";
}

template<>
inline const char * name<composition_interfaces::srv::LoadNode_Response>()
{
  return "composition_interfaces/srv/LoadNode_Response";
}

template<>
struct has_fixed_size<composition_interfaces::srv::LoadNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<composition_interfaces::srv::LoadNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<composition_interfaces::srv::LoadNode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<composition_interfaces::srv::LoadNode>()
{
  return "composition_interfaces::srv::LoadNode";
}

template<>
inline const char * name<composition_interfaces::srv::LoadNode>()
{
  return "composition_interfaces/srv/LoadNode";
}

template<>
struct has_fixed_size<composition_interfaces::srv::LoadNode>
  : std::integral_constant<
    bool,
    has_fixed_size<composition_interfaces::srv::LoadNode_Request>::value &&
    has_fixed_size<composition_interfaces::srv::LoadNode_Response>::value
  >
{
};

template<>
struct has_bounded_size<composition_interfaces::srv::LoadNode>
  : std::integral_constant<
    bool,
    has_bounded_size<composition_interfaces::srv::LoadNode_Request>::value &&
    has_bounded_size<composition_interfaces::srv::LoadNode_Response>::value
  >
{
};

template<>
struct is_service<composition_interfaces::srv::LoadNode>
  : std::true_type
{
};

template<>
struct is_service_request<composition_interfaces::srv::LoadNode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<composition_interfaces::srv::LoadNode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LOAD_NODE__TRAITS_HPP_
