#pragma once

#include <stdint.h>

typedef struct {
    uint8_t start;
    uint8_t len;
} span8_t;

#define ARRAY_NAME span8_array
#define ARRAY_TYPE span8_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
