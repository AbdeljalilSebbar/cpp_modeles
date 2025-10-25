SRC=Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp\
	Brain.cpp 
OBJ=$(SRC:.cpp=.o)
CPP=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address
NAME=Animal

all:$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o:%.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:fclean all

.PHONY:clean