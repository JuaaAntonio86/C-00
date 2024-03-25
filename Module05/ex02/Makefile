# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 18:41:43 by juan-anm          #+#    #+#              #
#    Updated: 2024/03/25 23:16:03 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = $(SRCS:%.cpp=$(DIR_OBJ)%.o)

DEPS = $(OBJS:%.o=%.d)

DIR_OBJ = .obj/

INCLUDES = Bureaucrat.hpp AForm.hpp  ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

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
