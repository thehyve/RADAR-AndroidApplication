#pragma once
#include <inttypes.h>

unsigned char* serialize_uint64(unsigned char* data, uint64_t value);
unsigned char* serialize_int16(unsigned char* data, int16_t value);
unsigned char* serialize_int32(unsigned char* data, int32_t value);
unsigned char* serialize_char(unsigned char* data, char value);