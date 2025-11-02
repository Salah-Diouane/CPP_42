# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 16:49:49 by sdiouane          #+#    #+#              #
#    Updated: 2025/02/18 15:08:51 by sdiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror  -std=c++98

NAME = ex01

all: $(NAME)

$(NAME): $(OBJ) Bureaucrat.hpp Form.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)