.PHONY: all fclean re

CC = c++

CFLAGS = -Wall -Wextra -Werror

CPP_VERSION = -std=c++98

NAME = PmergeMe


SRCS = main.cpp PmergeMe.cpp

HEADERS = PmergeMe.hpp

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(SRCS) -o $(NAME)
	@echo "Compiled!. Use\033[0;32m ./$(NAME)\033[0m\n"

all: $(NAME)

fclean:
	@rm -f $(NAME)
	clear

re: fclean all

