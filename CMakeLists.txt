cmake_minimum_required(VERSION 3.2)

project(libft C)

file(GLOB SRC *.c)
message(${SRC})
add_executable(libft ${SRC} ft_strnew.c ft_memalloc.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memdel.c)
