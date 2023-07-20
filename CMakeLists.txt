cmake_minimum_required(VERSION 3.8)

project(string LANGUAGES C)

add_library(string STATIC)

if (MSVC)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DWINDOWS")
else (MSVC)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DLINUX")
endif (MSVC)

target_sources(string PRIVATE
    src/string.c
)

target_include_directories(string PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(string
)
