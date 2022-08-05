# target : dependecies
#	actions


all:shell.exe

shell.exe: shell.o prompt.o read_input.o shell.h
	gcc shell.o prompt.o read_input.o -o shell.exe -l m

shell.o: shell.c
	gcc -c -Wall -Wextra -Werror -pedantic shell.c

prompt.o: prompt.c
	gcc -c -Wall -Wextra -Werror -pedantic prompt.c

read_input.o: read_input.c _getline.o strngcopy.o
	gcc -c -Wall -Wextra -Werror -pedantic read_input.c
	gcc -c -Wall -Wextra -Werror -pedantic _getline.c

_getline.o: _getline.c
	gcc -c -Wall -Wextra -Werror -pedantic _getline.c

strngcopy.o: strngcopy.c
	gcc -c -Wall -Wextra -Werror -pedantic strngcopy.c

run:
	./shell.exe

# test run prompts.


test.exe: test.o _getline.o shell.h
	gcc test.o _getline.o -o test.exe -l m

test.o: test.c
	gcc -c -Wall -Wextra -Werror -pedantic test.c

#_getline.o:
#	gcc -c -Wall -Wextra -Werror -pedantic _getline.c

run2:
	./test.exe

## cleaning proceedures.
clean: 
	rm -r *.o *.exe
