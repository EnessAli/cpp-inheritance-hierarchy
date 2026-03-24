# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egermen <egermen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 12:23:37 by egermen           #+#    #+#              #
#    Updated: 2024/11/19 12:23:37 by egermen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = ex01
SRC     = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ     = $(SRC:.cpp=.o)

RM      = rm -rf
CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
