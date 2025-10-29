# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 14:51:34 by abdsebba          #+#    #+#              #
#    Updated: 2025/10/29 14:51:42 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp  main.cpp
OBJ=$(SRC:.cpp=.o)
CPP=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=Interface

all:$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o:%.cpp MateriaSource.hpp AMateria.hpp Character.hpp Cure.hpp IMateriaSource.hpp Ice.hpp ICharacter.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:fclean all

.PHONY:clean