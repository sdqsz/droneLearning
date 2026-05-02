// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from lesson_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#include "lesson_interfaces/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_lesson_interfaces
const rosidl_type_hash_t *
lesson_interfaces__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0xf5, 0xf6, 0xe2, 0x88, 0xb2, 0xcf, 0xfc,
      0x62, 0xf4, 0xbe, 0xd6, 0xb5, 0xe4, 0x55, 0xf8,
      0x87, 0x8a, 0x5b, 0x31, 0xbd, 0xdc, 0x70, 0x6a,
      0xc8, 0xa9, 0xd6, 0xa4, 0x2a, 0xd4, 0xb0, 0x05,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char lesson_interfaces__msg__Num__TYPE_NAME[] = "lesson_interfaces/msg/Num";

// Define type names, field names, and default values
static char lesson_interfaces__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field lesson_interfaces__msg__Num__FIELDS[] = {
  {
    {lesson_interfaces__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lesson_interfaces__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lesson_interfaces__msg__Num__TYPE_NAME, 25, 25},
      {lesson_interfaces__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
lesson_interfaces__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lesson_interfaces__msg__Num__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 9, 9},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lesson_interfaces__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lesson_interfaces__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
