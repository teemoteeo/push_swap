# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcostant <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/28 14:53:33 by tcostant          #+#    #+#              #
#    Updated: 2026/01/28 15:19:07 by tcostant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = push_swap.c \
       push_swap_utils1.c \
       radix_sort.c \
       swap.c \
       push.c \
       rotate.c \
       reverse_rotate.c \
       libft/ft_convert.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

