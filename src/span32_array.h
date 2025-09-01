#pragma once

#include <stdint.h>

typedef struct {
    uint32_t start;
    uint32_t len;
} span32_t;

#define ARRAY_NAME span32_array
#define ARRAY_TYPE span32_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
