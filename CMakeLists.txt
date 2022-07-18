cmake_minimum_required(VERSION 3.22)
project(c_basics C)

set(CMAKE_C_STANDARD 99)

add_executable(c_basics main.c basic_types.c basic_types.h strings.c strings.h arrays1.c arrays2.c arrays.h)
