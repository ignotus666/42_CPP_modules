# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 11:50:48 by dhanlon           #+#    #+#              #
#    Updated: 2026/01/22 11:54:11 by dhanlon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = 	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp

OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
