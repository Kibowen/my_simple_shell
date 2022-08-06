cc=gcc
Cflags=-Wall -Wextra -Werror -pedantic
Cfiles=shell.c prompt.c read_input.c _getline.c
Objs=shell.o prompt.o read_input.o _getline.o

all:shell.exe

shell.exe: $(Objs) shell.h
	$(cc) $(Objs) -o shell.exe -l m

%.o: %.c
	$(cc) -c $(Cflags) $(Cfile) $@ $^

run:
	./shell.exe

## cleaning proceedures.
clean: 
	rm -r *.o *.exe

