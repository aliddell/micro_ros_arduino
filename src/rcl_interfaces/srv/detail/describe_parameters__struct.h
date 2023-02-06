// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/DescribeParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DescribeParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__DescribeParameters_Request
{
  rosidl_runtime_c__String__Sequence names;
} rcl_interfaces__srv__DescribeParameters_Request;

// Struct for a sequence of rcl_interfaces__srv__DescribeParameters_Request.
typedef struct rcl_interfaces__srv__DescribeParameters_Request__Sequence
{
  rcl_interfaces__srv__DescribeParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__DescribeParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'descriptors'
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.h"

/// Struct defined in srv/DescribeParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__DescribeParameters_Response
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence descriptors;
} rcl_interfaces__srv__DescribeParameters_Response;

// Struct for a sequence of rcl_interfaces__srv__DescribeParameters_Response.
typedef struct rcl_interfaces__srv__DescribeParameters_Response__Sequence
{
  rcl_interfaces__srv__DescribeParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__DescribeParameters_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rcl_interfaces__srv__DescribeParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rcl_interfaces__srv__DescribeParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DescribeParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__DescribeParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rcl_interfaces__srv__DescribeParameters_Request__Sequence request;
  rcl_interfaces__srv__DescribeParameters_Response__Sequence response;
} rcl_interfaces__srv__DescribeParameters_Event;

// Struct for a sequence of rcl_interfaces__srv__DescribeParameters_Event.
typedef struct rcl_interfaces__srv__DescribeParameters_Event__Sequence
{
  rcl_interfaces__srv__DescribeParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__DescribeParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__STRUCT_H_
