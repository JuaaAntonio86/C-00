# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 19:32:49 by juan-anm          #+#    #+#              #
#    Updated: 2024/04/03 19:33:09 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Iter

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=$(DIR_OBJ)%.o)

DEPS = $(OBJS:%.o=%.d)

DIR_OBJ = .obj/

INCLUDES = iter.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g

all: $(DIR_OBJ) $(NAME)

$(DIR_OBJ)	:
	mkdir -p $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(DIR_OBJ)%.o: %.cpp Makefile $(INCLUDES)
	$(CC) $(FLAGS) -MMD -c $< -o $@

clean:
	rm -rf $(DIR_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re

# **************************************************************************** #
