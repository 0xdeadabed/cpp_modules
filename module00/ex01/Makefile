# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: hypn0x <wubbalubba@dub.dub>                +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/03/16 12:51:20 by hypn0x            #+#    #+#             #
#   Updated: 2022/03/16 12:51:20 by hypn0x           ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME := phonebook

SRCS := Contact.cpp PhoneBook.cpp main.cpp
INCS := Contact.h PhoneBook.h
OBJS := $(SRCS:.cpp=.o)

CPP := g++
CPPFLAGS := -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	@$(CPP) $(OBJS) -o $@

%.o: %.cpp %h
	$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
