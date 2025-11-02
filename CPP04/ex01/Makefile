SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

all: $(NAME)

$(NAME): $(OBJ) Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp 
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
