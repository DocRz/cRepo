# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 19:12:20 by anrzepec          #+#    #+#              #
#    Updated: 2018/11/03 16:04:43 by andrewrze        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a

SRC 	= 	$(wildcard srcs/*.c)

OBJS	=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS	+=	-Werror -Wall -Wextra

INCL	=	includes

RM		=	rm -f

LIB		=	ar rcs

all		: 	$(NAME)

%.o		: 	%.c	
			$(CC) $(CFLAGS) -c $< -o $@  -I$(INCL)

$(NAME)	:	$(OBJS)
			$(LIB) $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
