# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 21:51:04 by abdsebba          #+#    #+#              #
#    Updated: 2025/11/13 21:51:05 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=Bureaucrat.cpp main.cpp Form.cpp
OBJ= $(SRC:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CPP= c++
NAME= form

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.cpp  Bureaucrat.hpp Form.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean