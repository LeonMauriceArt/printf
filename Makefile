# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 14:26:45 by lmaurin-          #+#    #+#              #
#    Updated: 2021/11/25 17:38:48 by lmaurin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
HEADER		=	ft_printf.h
OBJ			=	$(SRC:.c=.o)
BONUSOBJ	=	$(BONUS:.c=.o)

CC		=	gcc

SRC		=	ft_printf.c \
			./essential_functions/ft_essentials.c \
			./essential_functions/ft_putnbr.c \
			./essential_functions/ft_putnbr_base.c \
			ft_convert_part1.c \
			ft_convert_part2.c \
			

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) -c $< -Wall -Wextra -Werror -o $@

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)

clean:
	@/bin/rm -f *.o rm *.a rm -f ./essential_functions/*.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
