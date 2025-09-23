# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/20 18:02:05 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/20 18:02:06 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
SRC=Weapon.cpp main.cpp HumanA.cpp HumanB.cpp
OBJ=$(SRC:.cpp=.o)
NAME=Human

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(COMPILER) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean