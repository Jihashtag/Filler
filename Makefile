# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbert <jbert@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/18 19:08:08 by jbert             #+#    #+#              #
#    Updated: 2014/05/11 23:25:47 by jbert            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	filler

SRC		=	filler.c	filler2.c	main.c

OBJ		=	filler.o	filler2.o	main.o

FLAG	=	-Wall -Wextra -Werror -g3 -Ofast -ansi -pedantic

$(NAME):
	make all -C libft/
	gcc $(FLAG) -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(OBJ) libft/libft.a

all: $(NAME) 

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:	fclean all

.PHONY: all NAME clean fclean re

