# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: susharma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 15:03:06 by susharma          #+#    #+#              #
#    Updated: 2018/01/22 15:12:40 by susharma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = libft.a
SRC_LIBS = src/ft_putchar.c src/ft_putstr.c src/ft_swap.c src/ft_strcmp.c src/ft_strlen.c
H_LIBS = includes

all: make_lib

make_lib:
	gcc -Wall -Wextra -Werror -I$(H_LIBS) -c $(SRC_LIBS)
	ar rc $(DEST) ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	ranlib $(DEST)

clean:
	rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

fclean:	clean
	rm -f $(DEST)

re: fclean all
