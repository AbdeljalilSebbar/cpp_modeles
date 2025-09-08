SRC= main.cpp HumanB.cpp HumanA.cpp Weapon.cpp
OBJ= $(SRC:.cpp=.o)
COMPILE= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= Unnecessary_violence

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c HumanA.hpp HumanB.hpp Weapon.hpp
	$(COMPILE) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean