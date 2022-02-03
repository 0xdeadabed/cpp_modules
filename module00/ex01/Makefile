# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By:  <>                                        +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/02/03 10:44:31 by                   #+#    #+#             #
#   Updated: 2022/02/03 10:44:31 by                  ###   ########.fr       #
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
	@(CPP) $(OBJS) -o $@

%.o: %.cpp %h
	$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -f $(NAME)