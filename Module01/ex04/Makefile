# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 17:26:03 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/20 18:16:59 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace_strings

SRCS = main.cpp Replace.cpp

INCLUDES = Replace.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS) Makefile $(INCLUDES)
	$(CC) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

# **************************************************************************** #