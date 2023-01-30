CC = gcc
FLAG = -Wall -Werror -Wextra
PROG = ft_display_file
HEAD = ft.h
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)


all : $(PROG)

%.o : %.c
	$(CC) -c $(FLAG) -o $@ $<

$(PROG) : $(OBJ) $(HEAD)
	$(CC) -o $@ $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(PROG)

