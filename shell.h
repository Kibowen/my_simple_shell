#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#define GETLINE_MINSIZE 16

int print_prompt(void);
int get_input();

// get line protype
int _getline(char **lineptr, size_t *n, FILE *fp);