NAME = libfttest.out
SRC = libfttest.c tests/LibftTestCommon.c tests/AtoiTest.c
CC = gcc
INCLUDE = ../libft/includes
CFLAGS = -Wall -Wextra -Werror -o $(NAME)
DFLAGS = $(CFLAGS) -g

%.c:
	$(CC) $(DFLAGS) $(SRC) -c $<

$(NAME): $(SRC)
	$(CC) $(DFLAGS) $(SRC) -L ../libft -lft -I $(INCLUDE)

all: $(NAME)

clean:
	make -C ../libft clean

fclean: clean
	make -C ../libft fclean
	rm -f $(NAME)

re: fclean all

val:
	valgrind --leak-check=full ./ft_ls

.PHONY: all clean fclean re
