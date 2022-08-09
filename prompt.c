#include "shell.h"

int print_prompt(void)
{

    static int first_time = 1;
    if (first_time)
    {
        const char* CLEAR_SCREEN_ANSI = " \e[1;1H\e[2j";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
        first_time = 0;
    }

    printf("$ ");

    return 0;
}
