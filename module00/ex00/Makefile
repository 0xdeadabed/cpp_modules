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
******************* #

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

GPP = g++
RM = rm -f
GFLAGS = -Wall -Wextra -Werror

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) $(GFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re
