#include "shell.h"

int get_input()
{
	char *buffer = NULL;
	size_t *n = 0;
	
	_getline(&buffer, n, stdin);

	printf("this is what i printed: %s", buffer);

	return 0;
}
