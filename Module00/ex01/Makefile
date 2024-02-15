# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 12:56:43 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/15 15:50:58 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = JuansPhoneBook

SRC = main.cpp PhoneBook.cpp Contacts.class.cpp \
	
INCLUDES = PhoneBook.hpp Contacts.class.hpp \

OBJ = $(SRC:.cpp=.o)

CXX = c++ -Wextra -Werror -Wall -std=c++98 -g

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