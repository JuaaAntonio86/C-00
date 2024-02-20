# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 22:39:44 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/20 18:08:43 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

INCLUDES = HumanA.hpp HumanB.hpp Weapon.hpp

OBJS = $(SRCS:.cpp=.o)

CC = -c++ -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS) Makefile $(INCLUDES)
	@$(CC) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #