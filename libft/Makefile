# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbert <jbert@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 19:57:38 by jbert             #+#    #+#              #
#    Updated: 2014/05/10 16:56:50 by jbert            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	ft_memccpy.c	ft_putstr.c	ft_strdup.c	ft_strrchr.c	ft_memcpy.c	ft_putstr_fd.c	ft_strlcat.c	ft_strstr.c	ft_bzero.c	ft_memset.c	ft_isprint.c	ft_strlen.c	ft_tolower.c	ft_isalnum.c	ft_putchar.c	ft_strcat.c	ft_strncat.c	ft_toupper.c	ft_isalpha.c	ft_putchar_fd.c	ft_strchr.c	ft_strncmp.c	ft_isascii.c	ft_putendl.c	ft_strcmp.c	ft_strncpy.c	ft_isdigit.c	ft_putendl_fd.c	ft_strcpy.c	ft_strnstr.c	ft_memmove.c	ft_atoi.c	ft_strlcat.c	ft_memchr.c	ft_memcmp.c	ft_strclr.c	ft_striter.c	ft_striteri.c	ft_strmap.c	ft_strmapi.c	ft_strequ.c	ft_strnequ.c	ft_strsplit.c	ft_itoa.c	ft_putnbr.c	ft_putnbr_fd.c	ft_memdel.c	ft_strnew.c	ft_memalloc.c	ft_strdel.c	ft_strjoin.c	ft_strtrim.c	get_next_line.c

$(NAME):
	gcc -c $(SRC) -Wall -Wextra -Werror
	ar rc $(NAME) $(OBJ)
	ranlib libft.a

OBJ	=	ft_memccpy.o	ft_putstr.o	ft_strdup.o	ft_strrchr.o	ft_memcpy.o	ft_putstr_fd.o	ft_strlcat.o	ft_strstr.o	ft_bzero.o	ft_memset.o	ft_isprint.o	ft_strlen.o	ft_tolower.o	ft_isalnum.o	ft_putchar.o	ft_strcat.o	ft_strncat.o	ft_toupper.o	ft_isalpha.o	ft_putchar_fd.o	ft_strchr.o	ft_strncmp.o	ft_isascii.o	ft_putendl.o	ft_strcmp.o	ft_strncpy.o	ft_isdigit.o	ft_putendl_fd.o	ft_strcpy.o	ft_strnstr.o	ft_memmove.o	ft_atoi.o	ft_strlcat.o	ft_memchr.o	ft_memcmp.o	ft_strclr.o	ft_striter.o	ft_striteri.o	ft_strmap.o	ft_strmapi.o	ft_strequ.o	ft_strnequ.o	ft_strsplit.o	ft_itoa.o	ft_putnbr.o	ft_putnbr_fd.o	ft_memdel.o	ft_strnew.o	ft_memalloc.o	ft_strdel.o	ft_strjoin.o	ft_strtrim.o	get_next_line.o

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAMEO) libft.a

re : fclean all
