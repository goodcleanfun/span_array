#pragma once

#include <stdint.h>

typedef struct {
    uint16_t start;
    uint16_t len;
} span16_t;

#define ARRAY_NAME span16_array
#define ARRAY_TYPE span16_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
