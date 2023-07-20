#pragma once

#define STRING_MAXLEN 4096
typedef char String[STRING_MAXLEN];

#ifdef LINUX
    #include <stdlib.h>
    #include <string.h>

    int strcpy_s(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource);
    int strcat_s(char* pDestination, size_t nDestinantionSizeBytes, const char* pSource);
#endif // LINUX

#ifdef WINDOWS
#endif // WINDOWS
