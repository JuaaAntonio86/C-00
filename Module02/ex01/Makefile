# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 18:00:05 by juan-anm          #+#    #+#              #
#    Updated: 2024/03/01 16:39:25 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = Fixed.hpp

CC = c++ -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME) : $(OBJS) $(INCLUDES)
	$(CC) $(SRCS) -o $(NAME)

%.o : %.cpp Makefile
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #

