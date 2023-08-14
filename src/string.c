#include "string/string.h"

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
