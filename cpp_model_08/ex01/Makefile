# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/06 13:15:20 by abdsebba          #+#    #+#              #
#    Updated: 2025/12/06 13:15:21 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp Span.cpp
OBJ=$(SRC:.cpp=.o)
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CPP=c++
NAME=ex01

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.cpp Span.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
