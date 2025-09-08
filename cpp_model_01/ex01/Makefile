SRC= Zombie.cpp main.cpp zombieHorde.cpp
OBJ= $(SRC:.cpp=.o)
COMPILE= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c Zombie.hpp
	$(COMPILE) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean