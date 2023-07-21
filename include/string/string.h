#pragma once

#include <stdlib.h>
#include <string.h>

#define STRING_MAXLEN 4096
#define STRING_ERROR -1

typedef char string_t[STRING_MAXLEN];

int strcpy_s(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource);
int strcat_s(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource);
