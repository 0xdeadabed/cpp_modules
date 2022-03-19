######################################################################
# @author      : hypn0x (wubbalubba@dubdub)
# @file        : Makefile
# @created     : Friday Mar 04, 2022 18:05:19 CET
######################################################################

SHELL = /bin/sh

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -I.
# DEBUG
CFLAGS += -g3 -fsanitize=address
CC     = c++ $(CFLAGS)

SRCS := $(shell find . -name '*.cpp')
OBJ := $(SRCS:%cpp=%o)

NAME   = irt

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
