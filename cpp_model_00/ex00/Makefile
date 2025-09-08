SRC= megaphone.cpp
OBJ= $(SRC:.cpp=.o)
CFLAGS= -Wall -Wextra -Werror -std=c++98
COMPILE= c++
NAME= megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $@

%.o: %.c
	$(COMPILE) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean