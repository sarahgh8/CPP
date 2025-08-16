CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = ${SRC:.c=.o}
NAME = phonebook

all: ${NAME}

${NAME}: ${OBJ}
	${CPP} ${FLAGS} $^ -o $@

%.o: %.c
	${CPP} ${FLAGS} -c $^ -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
	