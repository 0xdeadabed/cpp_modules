SHELL = /bin/sh

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC     = c++ $(CFLAGS)

SRCS := $(shell find . -name '*.cpp')
OBJ := $(SRCS:%cpp=%o)

NAME   = karen

.cpp.o:
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
