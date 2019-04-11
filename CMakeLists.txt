cmake_minimum_required(VERSION 3.2)

project(libft C)

file(GLOB SRC *.c)
message(${SRC})
add_executable(libft ${SRC})
