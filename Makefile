##
## EPITECH PROJECT, 2025
## mini_printf
## File description:
## Makefile
##

CFILES = $(shell find ./src -name "*.c")

OFILES = $(CFILES:.c=.o)

# CFLAGS = -Wall -Wextra -Werror

NAME = mini_printf.a

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

all:	$(NAME) clean

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
