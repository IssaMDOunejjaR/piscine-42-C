# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 16:49:13 by iounejja          #+#    #+#              #
#    Updated: 2019/09/10 16:59:32 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs
HEAD = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)/*.c $(HEAD)/*.h 
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o
	rm -f $(HEAD)/*.gch

fclean:
	rm -f $(NAME)

re: fclean all
