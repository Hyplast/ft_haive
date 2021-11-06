# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: severi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 00:23:20 by severi            #+#    #+#              #
#    Updated: 2021/11/06 16:06:34 by severi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file
FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

MAIN		=	ft_display_file.c

OBJ			=	./*.o

CC			=	gcc
CFLAGS		?=	-Wall -Wextra -Werror
CFLAGS		+=	-I.
#CFLAGS		+=	-c

SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.c=.o))

# Even if a file exisits, don't process with it.
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(MAIN) -o $@

$(OBJ): $(MAIN)
	@gcc $(CFLAGS) $(MAIN)

build/%.o: srcs/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf build/
	@rm -rf $(OBJ)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

build:
	mkdir build/
