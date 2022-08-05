#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int print_prompt(void);
int get_input();
char *_strcpy(char *dest, const char *src);

// get line protypes
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
