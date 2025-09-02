#pragma once

#include <stdint.h>

typedef struct {
    uint16_t start;
    uint16_t len;
} uint16_span_t;

#define ARRAY_NAME uint16_span_array
#define ARRAY_TYPE uint16_span_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
