# Name of the program
NAME = animals

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Source files and object files
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Prevent conflicts with files named like rules
.PHONY: all clean fclean re
