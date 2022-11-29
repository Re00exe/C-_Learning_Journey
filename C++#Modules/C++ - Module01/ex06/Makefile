.PHONY: all fclean re

CC	= c++

CFLAGS	= -Wall -Werror -Wextra

CPP_VERSION	= -std=c++98

NAME	= harl_filter

SRCS	=  	main.cpp Harl.cpp

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(SRCS) -o $(NAME)
	@echo "Compiled!. Use\033[0;32m ./$(NAME)\033[0m\n"

all: $(NAME)

fclean:
	@rm -f $(NAME)
	clear

re: fclean all