# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 23:17:59 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/19 17:41:19 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZOMBIE

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -Wextra -Wall -Werror -std=c++98 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #