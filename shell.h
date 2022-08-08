#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define GETLINE_MINSIZE 16

int print_prompt(void);
char *get_input();
char** tokenize(char *line_read, ssize_t num_read);
int execution(char **tokens);
void commands(char **args);

// get line protype
int _getline(char **lineptr, size_t *n, FILE *fp);