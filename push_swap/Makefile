# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 14:52:29 by julienbelda       #+#    #+#              #
#    Updated: 2024/11/07 11:59:50 by julienbelda      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	push_swap.c \
			push.c \
			reverse_rotate.c \
			rotate.c \
			linked_list \
			swap.c

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

RM		=		rm -f

CFLAGS	=		-Wall -Wextra -Werror -g

all: 			$(NAME)

push_swap:		*.o Printf/libftprintf.a
				$(CC) -o $@ $^

%.o: 			%.c
				$(CC) -c $(CFLAGS) $?

Printf/libftprintf.a:
				@make -C Printf

clean:
				${RM} $(OBJS)
				@make -C Printf clean

fclean:			clean
				${RM} push_swap Printf/libftprintf.a
				@make -C Printf fclean

re: 			fclean all

.PHONY:			all  clean fclean re
