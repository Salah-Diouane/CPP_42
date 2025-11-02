SRC = main.cpp ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror  -std=c++98

NAME = convert

all: $(NAME)

$(NAME): $(OBJ) ScalarConverter.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)