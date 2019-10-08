# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alabreui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 12:42:15 by alabreui          #+#    #+#              #
#    Updated: 2019/10/08 12:48:18 by alabreui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

#PATH_SRC = ./srcs/

#HEADERS = ./includes

#SRCS = $(PATH_SRC)ft_putchar.c  $(PATH_SRC)ft_swap.c $(PATH_SRC)ft_putstr.c \
    $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c

SRCS = ${wildcard ft_*.c}

OBJS =  ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o :
	#gcc -c $(FLAGS) -I $(HEADERS) $< -o $(<:.c=.o)
	gcc -c $(FLAGS) $< -o $(<:.c=.o)

$(NAME) : ${OBJS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f ${OBJS}

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
