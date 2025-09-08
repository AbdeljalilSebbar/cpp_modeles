SRC= Contact.cpp PhoneBook.cpp help_func.cpp
OBJ= $(SRC:.cpp=.o)
COMPILE= c++
CFLAGS= -Wall -Wextra -Werror
NAME= phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c Contact.hpp PhoneBook.hpp
	$(COMPILE) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean