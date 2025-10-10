# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/20 18:01:46 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/20 18:01:47 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp
OBJ=$(SRC:.cpp=.o)
NAME=brain

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CPPFLAGS) $(OBJ) -o $@

%.o:%.cpp
	$(COMPILE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:clean