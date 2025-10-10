# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 17:03:22 by abdsebba          #+#    #+#              #
#    Updated: 2025/09/16 16:54:57 by abdsebba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= Contact.cpp PhoneBook.cpp help_func.cpp add_contact.cpp
OBJ= $(SRC:.cpp=.o)
COMPILE= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Contact.hpp PhoneBook.hpp
	$(COMPILE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean