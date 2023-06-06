# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 16:11:20 by hwiemann          #+#    #+#              #
#    Updated: 2023/05/25 16:14:25 by hwiemann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR = ar rc

RM = rm -fr

CC = cc 

FLAG = -Werror -Wextra -Wall

SRC =


OBJ = $(SRC:%.c=%.o)

all: $(NAME) 

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(FLAG) -c $< -o $@
clean:
	$(RM) $(OBJ) 
fclean:clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all fclean clean re