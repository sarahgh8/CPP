CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all: ${NAME}

${NAME}: megaphone.o
	${CPP} ${FLAGS} $^ -o $@

megaphone.o: megaphone.cpp
	${CPP} ${FLAGS} -c $^ -o $@

fclean: clean
	rm -f ${NAME}

clean:
	rm -f megaphone.o

re:	fclean

.PHONY: all clean fclean re
