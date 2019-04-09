# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhossan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/29 10:21:24 by akhossan          #+#    #+#              #
#    Updated: 2019/03/29 10:52:46 by akhossan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=$(wildcard srcs/*.c)

OBJECTS= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES= includes/

CFLAGS= -Werror -Wall -Wextra

NAME=libft.a

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
