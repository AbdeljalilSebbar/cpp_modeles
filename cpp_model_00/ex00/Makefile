# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 17:03:01 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/16 16:54:48 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= megaphone.cpp
OBJ= $(SRC:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
COMPILE= c++
NAME= megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(COMPILE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean