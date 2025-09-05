CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
NAME = AbstractAnimal

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CPP) $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re