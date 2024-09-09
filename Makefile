##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	main.c 	\

NAME	= 103cipher

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lm
	rm -f $(OBJ)

tests_run:
	gcc -o unit_tests  $(TESTS) -lm -lcriterion --coverage
	./unit_tests

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

