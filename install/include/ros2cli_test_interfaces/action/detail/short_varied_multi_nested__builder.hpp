// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2cli_test_interfaces:action\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__BUILDER_HPP_
#define ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__BUILDER_HPP_

#include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_Goal_short_varied_nested
{
public:
  Init_ShortVariedMultiNested_Goal_short_varied_nested()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal short_varied_nested(::ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal::_short_varied_nested_type arg)
  {
    msg_.short_varied_nested = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_Goal_short_varied_nested();
}

}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_Result_bool_value
{
public:
  Init_ShortVariedMultiNested_Result_bool_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_Result bool_value(::ros2cli_test_interfaces::action::ShortVariedMultiNested_Result::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_Result_bool_value();
}

}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_Feedback_bool_values
{
public:
  Init_ShortVariedMultiNested_Feedback_bool_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback bool_values(::ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback::_bool_values_type arg)
  {
    msg_.bool_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_Feedback_bool_values();
}

}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_SendGoal_Request_goal
{
public:
  explicit Init_ShortVariedMultiNested_SendGoal_Request_goal(::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request goal(::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request msg_;
};

class Init_ShortVariedMultiNested_SendGoal_Request_goal_id
{
public:
  Init_ShortVariedMultiNested_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShortVariedMultiNested_SendGoal_Request_goal goal_id(::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ShortVariedMultiNested_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_SendGoal_Request_goal_id();
}

}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_SendGoal_Response_stamp
{
public:
  explicit Init_ShortVariedMultiNested_SendGoal_Response_stamp(::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response stamp(::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response msg_;
};

class Init_ShortVariedMultiNested_SendGoal_Response_accepted
{
public:
  Init_ShortVariedMultiNested_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShortVariedMultiNested_SendGoal_Response_stamp accepted(::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ShortVariedMultiNested_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_SendGoal_Response_accepted();
}

}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_GetResult_Request_goal_id
{
public:
  Init_ShortVariedMultiNested_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request goal_id(::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_GetResult_Request_goal_id();
}

}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_GetResult_Response_result
{
public:
  explicit Init_ShortVariedMultiNested_GetResult_Response_result(::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response result(::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response msg_;
};

class Init_ShortVariedMultiNested_GetResult_Response_status
{
public:
  Init_ShortVariedMultiNested_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShortVariedMultiNested_GetResult_Response_result status(::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ShortVariedMultiNested_GetResult_Response_result(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_GetResult_Response_status();
}

}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace action
{

namespace builder
{

class Init_ShortVariedMultiNested_FeedbackMessage_feedback
{
public:
  explicit Init_ShortVariedMultiNested_FeedbackMessage_feedback(::ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage feedback(::ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage msg_;
};

class Init_ShortVariedMultiNested_FeedbackMessage_goal_id
{
public:
  Init_ShortVariedMultiNested_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShortVariedMultiNested_FeedbackMessage_feedback goal_id(::ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ShortVariedMultiNested_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage>()
{
  return ros2cli_test_interfaces::action::builder::Init_ShortVariedMultiNested_FeedbackMessage_goal_id();
}

}  // namespace ros2cli_test_interfaces

#endif  // ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__BUILDER_HPP_
