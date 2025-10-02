# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/20 18:09:34 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/20 18:09:35 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=Fixed.cpp main.cpp
OBJ=$(SRC:.cpp=.o)
NAME=Fixed

all:$(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.cpp Fixed.hpp
	$(COMPILE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean