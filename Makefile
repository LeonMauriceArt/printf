# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 14:26:45 by lmaurin-          #+#    #+#              #
#    Updated: 2021/11/19 15:39:31 by lmaurin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
HEADER		=	printf.h
OBJ			=	$(SRC:.c=.o)
BONUSOBJ	=	$(BONUS:.c=.o)

CC		=	gcc

SRC		=	ft_printf.c \

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) -c $< -Wall -Wextra -Werror -o $@

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
