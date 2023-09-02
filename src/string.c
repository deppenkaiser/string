#include "string/string.h"

#include <sys/stat.h>
#include <libgen.h>
#include <unistd.h>

int string_copy(char* destination, size_t destinantion_size_bytes, const char* source)
{
    int copied = STRING_ERROR;

    if (destinantion_size_bytes >= strlen(source))
    {
        strcpy(destination, source);
        copied = 0;
    }

    return copied;
}

int string_cat(char* destination, size_t destinantion_size_bytes, const char* source)
{
    int done = STRING_ERROR;

    if ((strlen(destination) + strlen(source)) < destinantion_size_bytes)
    {
        strcat(destination, source);
        done = 0;
    }

    return done;
}

bool string_directory_exists(const char* directory)
{
    struct stat st = {0};
    return stat(directory, &st) != -1;
}

void string_directory_create(const char* directory)
{
    mkdir(directory, 0700);
}

const char* string_dirname_from_filepath(char* filepath)
{
    return dirname(filepath);
}

bool string_filepath_exist(char* filepath)
{
    return access(filepath, F_OK) == 0;
}
