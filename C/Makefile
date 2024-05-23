NAMES = Colleen

SRC = Colleen.c
OBJ:= $(SRC:.c=.o)
CC = clang
CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) -c $^ $(CFLAGS) -o $@

all: $(NAMES)
Colleen: Colleen.o
	$(CC) Colleen.o -o Colleen

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAMES)

re: fclean all

.PHONY: all clean fclean re bonusc