# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 12:56:43 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/12 22:03:18 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GlobalBanksters

SRC = tests.cpp Account.cpp \
	
INCLUDES = Account.hpp  \

OBJ = $(SRC:.cpp=.o)

CXX = clang++ ##-Wextra -Werror -Wall -std=c++98 -g

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