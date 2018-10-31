# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 19:12:20 by anrzepec          #+#    #+#              #
#    Updated: 2018/09/18 18:42:55 by anrzepec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft

SRC 	= 	$(wildcard srcs/*.c main.c)

OBJS	=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS	+=	-Werror -Wall -Wextra

INCL	=	includes

RM		=	rm -f

all		: 	$(NAME)

%.o		: 	%.c	
			$(CC) $(CFLAGS) -c $< -o $@  -I$(INCL)

$(NAME)	:	$(OBJS)
			$(CC) -g -fsanitize=address -o $(NAME) $(OBJS)


clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
