CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 -I./include

SRC = src/r1.c \
    src/r2.c \
    src/vectors.c\
    src/R.c
OBJS = $(SRC:.c=.o) #all *.o are generate from *.c files

EXE = r_all

all:$(EXE) #je demande a la regle all d'executer la regle EXE

$(EXE):$(OBJS)
	$(CC) $(OBJS) -o $(EXE) $(CFLAGS)

clean:
	rm -rf src/*.o *~
fclean: clean 
	rm -rf $(EXE)
    
re : fclean all

