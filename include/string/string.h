#pragma once

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define STRING_MAXLEN 4096
#define STRING_ERROR -1

typedef char string_t[STRING_MAXLEN];

int string_copy(char* destination, size_t destinantion_size_bytes, const char* source);
int string_cat(char* destination, size_t destinantion_size_bytes, const char* source);
const char* string_dirname_from_filepath(char* filepath);
bool string_directory_exists(const char* directory);
void string_directory_create(const char* directory);
bool string_filepath_exist(char* filepath);
