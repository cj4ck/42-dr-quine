NAMES = Colleen Grace Sully

SRC = Colleen.c Grace.c Sully.c
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

Sully: Sully.o
	$(CC) Sully.o -o Sully

clean:
	rm -rf $(OBJ) Grace_kid.c Sully_*

fclean: clean
	rm -rf $(NAMES)

re: fclean all

.PHONY: all clean fclean re bonusc
