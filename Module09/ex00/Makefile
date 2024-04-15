# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 23:31:44 by juan-anm          #+#    #+#              #
#    Updated: 2024/04/16 00:30:06 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRCS = main.cpp BitcoinExchange.cpp

OBJS = $(SRCS:%.cpp=$(DIR_OBJ)%.o)

DEPS = $(OBJS:%.o=%.d)

DIR_OBJ = .obj/

INCLUDES = BitcoinExchange.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g ##-fsanitize=address

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

git : fclean
	@read -p "Enter commit message: " commit_message; \
    git add .; \
    git commit -m "$$commit_message"
	git push

-include $(DEPS)

.PHONY: all clean fclean re git

# **************************************************************************** #
