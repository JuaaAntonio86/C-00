# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 23:17:59 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/22 00:22:51 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZOMBIE

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

INCLUDES = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -Wextra -Wall -Werror -std=c++98 

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #