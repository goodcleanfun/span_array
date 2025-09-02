#pragma once

#include <stdint.h>

typedef struct {
    uint32_t start;
    uint32_t len;
} uint32_span_t;

#define ARRAY_NAME uint32_span_array
#define ARRAY_TYPE uint32_span_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
