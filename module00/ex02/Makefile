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

NAME = handle_accounts

SRCS = Account.cpp	\
		tests.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
