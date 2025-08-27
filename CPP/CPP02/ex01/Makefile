CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Fixed

all: ${NAME}

${NAME}: ${OBJ}
	${CPP} ${FLAGS} $^ -o $@

%.o: %.cpp
	${CPP} ${FLAGS} -c $^ -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean fclean all re