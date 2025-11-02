# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 16:51:47 by sdiouane          #+#    #+#              #
#    Updated: 2025/02/18 15:08:57 by sdiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror  -std=c++98

NAME = ex03

all: $(NAME)

$(NAME): $(OBJ) Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)