#pragma once

#include <stdint.h>

typedef struct {
    uint64_t offset;
    uint64_t len;
} uint64_span_t;

#define ARRAY_NAME uint64_span_array
#define ARRAY_TYPE uint64_span_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
