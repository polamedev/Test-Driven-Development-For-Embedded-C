#pragma once

#include <stddef.h>

typedef struct CircularBuffer *CircularBuffer;

CircularBuffer CircularBuffer_Create(size_t size);
