# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 12:56:43 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/09 23:37:15 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = main.cpp PhoneBook.cpp Contacts.class.cpp \
	
INCLUDES = PhoneBook.hpp Contacts.class.hpp \

OBJ = $(SRC:.cpp=.o)

CXX = clang++ -Wextra -Werror -Wall -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)
	
%.o: %.cpp $(INCLUDES)
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #