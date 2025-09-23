# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/20 18:05:20 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/20 18:05:21 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
SRC=main.cpp Harl.cpp
OBJ=$(SRC:.cpp=.o)
NAME=harlFilter

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(COMPILER) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean