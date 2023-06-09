# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 16:11:20 by hwiemann          #+#    #+#              #
#    Updated: 2023/06/07 15:03:41 by hwiemann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR = ar rc

RM = rm -fr

CC = cc

FLAG = -Werror -Wextra -Wall

SRC = $(wildcard *.c)

OBJ = $(SRC:%.c=%.o)

LIBFT = libft/libft.a

all: $(NAME)

$(LIBFT):
	make -C libft

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(FLAG) -c $< -o $@
clean:
	$(RM) $(OBJ)
	make clean -C libft
fclean:clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all fclean clean re
