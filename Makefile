# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 18:10:20 by tamarant          #+#    #+#              #
#    Updated: 2019/04/11 20:33:57 by tamarant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c\
	  ft_isalpha.c ft_isdigit.c ft_atoi.c ft_strncpy.c ft_strncmp.c \
	  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	  ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	  ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o\
	  ft_isalpha.o ft_isdigit.o ft_atoi.o ft_strncpy.o ft_strncmp.o \
	  ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
	  ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o \
	  ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
				gcc $(FLAGS) -I libft.h -c $(SRC)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
				rm -rf $(OBJ)

fclean: clean
				rm -rf $(NAME)

re: fclean all
