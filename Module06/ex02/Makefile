# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 00:48:24 by juan-anm          #+#    #+#              #
#    Updated: 2024/04/03 00:49:08 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ClassesRealType

SRCS = main.cpp Classes.cpp

OBJS = $(SRCS:%.cpp=$(DIR_OBJ)%.o)

DEPS = $(OBJS:%.o=%.d)

DIR_OBJ = .obj/

INCLUDES = Classes.hpp

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
