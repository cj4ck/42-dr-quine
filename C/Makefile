NAMES = Colleen Grace

SRC = Colleen.c Grace.c
OBJ:= $(SRC:.c=.o)
CC = clang
CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) -c $^ $(CFLAGS) -o $@

all: $(NAMES)

Grace: Grace.o
	$(CC) Grace.o -o Grace

Colleen: Colleen.o
	$(CC) Colleen.o -o Colleen

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAMES)

re: fclean all

.PHONY: all clean fclean re bonusc
