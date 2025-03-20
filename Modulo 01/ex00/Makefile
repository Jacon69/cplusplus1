# Nombre del programa
NAME = zombies

# Compilador y flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Archivos fuente y binarios
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)

# Reglas
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
# Evita conflictos con archivos llamados como las reglas
.PHONY: all clean fclean re