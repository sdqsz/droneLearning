// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lesson_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lesson_interfaces/msg/num.h"


#ifndef LESSON_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
#define LESSON_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package lesson_interfaces.
typedef struct lesson_interfaces__msg__Num
{
  int64_t num;
} lesson_interfaces__msg__Num;

// Struct for a sequence of lesson_interfaces__msg__Num.
typedef struct lesson_interfaces__msg__Num__Sequence
{
  lesson_interfaces__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lesson_interfaces__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LESSON_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
