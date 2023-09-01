#include "string/string.h"

#include <sys/stat.h>
#include <libgen.h>

int string_copy(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource)
{
    int copied = STRING_ERROR;

    if (nDestinantionSizeBytes >= strlen(pSource))
    {
        strcpy(pDestination, pSource);
        copied = 0;
    }

    return copied;
}

int string_cat(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource)
{
    int done = STRING_ERROR;

    if ((strlen(pDestination) + strlen(pSource)) < nDestinantionSizeBytes)
    {
        strcat(pDestination, pSource);
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
