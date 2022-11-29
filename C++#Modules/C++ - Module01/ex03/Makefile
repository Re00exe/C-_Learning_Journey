.PHONY: all fclean re

CC	= c++

CFLAGS	= -Wall -Werror -Wextra

CPP_VERSION	= -std=c++98

NAME	= Unnecessary_Violence

SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(SRCS) -o $(NAME)
	@echo "Compiled!. Use\033[0;32m ./$(NAME)\033[0m\n"

all: $(NAME)

fclean:
	@rm -f $(NAME)
	clear

re: fclean all