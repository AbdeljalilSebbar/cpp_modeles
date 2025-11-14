# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 21:50:26 by abdsebba          #+#    #+#              #
#    Updated: 2025/11/13 21:50:27 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=Bureaucrat.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
CPP= c++
NAME= bureaucrat

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.cpp  Bureaucrat.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean