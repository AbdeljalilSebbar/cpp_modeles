# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/20 18:00:56 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/20 18:00:57 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ=$(SRC:.cpp=.o)
NAME=zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CPPFLAGS) $(OBJ) -o $@

%.o:%.cpp Zombie.hpp
	$(COMPILE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:clean