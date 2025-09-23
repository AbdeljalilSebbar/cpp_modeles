# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/20 18:04:17 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/23 15:09:40 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
SRC=main.cpp handleFile.cpp
OBJ=$(SRC:.cpp=.o)
NAME=replace

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp handleFile.hpp
	$(COMPILER) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean