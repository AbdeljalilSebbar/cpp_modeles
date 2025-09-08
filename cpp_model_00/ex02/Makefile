SRC= tests.cpp Account.cpp
OBJ= $(SRC:.cpp=.o)
COMPILE= c++
CFLAGS= -Wall -Wextra -Werror
NAME= Account_amounts

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c Account.hpp
	$(COMPILE) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean