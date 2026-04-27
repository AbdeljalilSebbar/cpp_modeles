SRC= PmergeMe.cpp main.cpp
OBJ=$(SRC:.cpp=.o)
CPP=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
NAME=PmergeMe

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.c PmergeMe.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean