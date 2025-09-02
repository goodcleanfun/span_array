#pragma once

#include <stdint.h>

typedef struct {
    uint8_t start;
    uint8_t len;
} uint8_span_t;

#define ARRAY_NAME uint8_span_array
#define ARRAY_TYPE uint8_span_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
