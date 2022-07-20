cmake_minimum_required(VERSION 3.22)
project(c_basics C)

set(CMAKE_C_STANDARD 99)

add_executable(
        c_basics main.c
        basic_types.c basic_types.h
        arrays1.c arrays2.c malloc1.c arrays.h
        pointers1.c pointers2.c pointers.h
        strings1.c strings2.c strings3.c strings.h
)
