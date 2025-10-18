SRC=ClapTrap.cpp main.cpp ScavTrap.cpp
OBJ=$(SRC:.cpp=.o)
CPP=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=ScavTrap

all:$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o:%.cpp ClapTrap.hpp ScavTrap.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:fclean all

.PHONY:clean