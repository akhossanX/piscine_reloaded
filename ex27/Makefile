# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhossan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/29 11:33:43 by akhossan          #+#    #+#              #
#    Updated: 2019/03/29 11:39:37 by akhossan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_display_file

all: $(NAME)

main.o:
	gcc -c $(CFLAGS) -I. main.c

$(NAME): main.o
	gcc main.o -o $(NAME)

clean:
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
