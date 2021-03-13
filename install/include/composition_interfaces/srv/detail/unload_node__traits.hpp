// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from composition_interfaces:srv\UnloadNode.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__TRAITS_HPP_
#define COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__TRAITS_HPP_

#include "composition_interfaces/srv/detail/unload_node__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const composition_interfaces::srv::UnloadNode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const composition_interfaces::srv::UnloadNode_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<composition_interfaces::srv::UnloadNode_Request>()
{
  return "composition_interfaces::srv::UnloadNode_Request";
}

template<>
inline const char * name<composition_interfaces::srv::UnloadNode_Request>()
{
  return "composition_interfaces/srv/UnloadNode_Request";
}

template<>
struct has_fixed_size<composition_interfaces::srv::UnloadNode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<composition_interfaces::srv::UnloadNode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<composition_interfaces::srv::UnloadNode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const composition_interfaces::srv::UnloadNode_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const composition_interfaces::srv::UnloadNode_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<composition_interfaces::srv::UnloadNode_Response>()
{
  return "composition_interfaces::srv::UnloadNode_Response";
}

template<>
inline const char * name<composition_interfaces::srv::UnloadNode_Response>()
{
  return "composition_interfaces/srv/UnloadNode_Response";
}

template<>
struct has_fixed_size<composition_interfaces::srv::UnloadNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<composition_interfaces::srv::UnloadNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<composition_interfaces::srv::UnloadNode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<composition_interfaces::srv::UnloadNode>()
{
  return "composition_interfaces::srv::UnloadNode";
}

template<>
inline const char * name<composition_interfaces::srv::UnloadNode>()
{
  return "composition_interfaces/srv/UnloadNode";
}

template<>
struct has_fixed_size<composition_interfaces::srv::UnloadNode>
  : std::integral_constant<
    bool,
    has_fixed_size<composition_interfaces::srv::UnloadNode_Request>::value &&
    has_fixed_size<composition_interfaces::srv::UnloadNode_Response>::value
  >
{
};

template<>
struct has_bounded_size<composition_interfaces::srv::UnloadNode>
  : std::integral_constant<
    bool,
    has_bounded_size<composition_interfaces::srv::UnloadNode_Request>::value &&
    has_bounded_size<composition_interfaces::srv::UnloadNode_Response>::value
  >
{
};

template<>
struct is_service<composition_interfaces::srv::UnloadNode>
  : std::true_type
{
};

template<>
struct is_service_request<composition_interfaces::srv::UnloadNode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<composition_interfaces::srv::UnloadNode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__TRAITS_HPP_
