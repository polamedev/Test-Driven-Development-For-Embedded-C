#pragma once

#include <stddef.h>
#include <stdbool.h>

typedef struct CircularBuffer *CircularBuffer;

CircularBuffer CircularBuffer_Create(size_t size);
bool CircularBuffer_IsEmpty(CircularBuffer self);
