#pragma once

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define STRING_MAXLEN 4096
#define STRING_ERROR -1

typedef char string_t[STRING_MAXLEN];

int string_copy(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource);
int string_cat(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource);
bool string_directory_exists(const char* directory);
void string_directory_create(const char* directory);
