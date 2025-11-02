SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03

all: $(NAME)

$(NAME): $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
