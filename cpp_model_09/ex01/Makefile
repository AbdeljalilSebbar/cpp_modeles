SRC=RPN.cpp main.cpp
OBJ=$(SRC:.cpp=.o)
CPP=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=RPN

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.c RPN.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean