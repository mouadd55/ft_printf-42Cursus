# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:49:09 by moudrib           #+#    #+#              #
#    Updated: 2022/11/15 13:43:26 by moudrib          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_print_char.c ft_print_dec.c ft_print_hexa.c ft_print_str.c ft_printf.c \
		ft_print_ptr.c ft_printunnbr.c 
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean :
	-rm -f $(OBJ)

fclean : clean
	-rm -f $(NAME)
	
re : fclean all