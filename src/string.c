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

const char* string_append_directory_to_path_and_create(const char* path, const char* directory)
{
    static string_t _path = {0};

    string_copy(_path, sizeof(string_t), path);
    string_cat(_path, sizeof(string_t), "/");
    string_cat(_path, sizeof(string_t), directory);

    if (string_directory_exists(_path) == false)
    {
        string_directory_create(_path);
    }

    return _path;
}
