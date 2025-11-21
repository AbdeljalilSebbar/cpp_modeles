SRC=ScalarConverter.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
CPP= c++
NAME=ScalarConverter

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.cpp ScalarConverter.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean