cmake_minimum_required(VERSION 3.22)
project(c_basics C)

set(CMAKE_C_STANDARD 99)

add_executable(
        c_basics main.c funcs.h
        basic_types.c
        arrays1.c arrays2.c
        pointers1.c pointers2.c
        strings1.c strings2.c strings3.c
        malloc1.c malloc2.c
        calloc1.c
        realloc1.c
        copy_by.c
        return_array1.c return_array2.c
        string_funcs1.c
        cli_args.c
)
