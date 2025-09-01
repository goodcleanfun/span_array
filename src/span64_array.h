#pragma once

#include <stdint.h>

typedef struct {
    uint64_t offset;
    uint64_t len;
} span64_t;

#define ARRAY_NAME span64_array
#define ARRAY_TYPE span64_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
