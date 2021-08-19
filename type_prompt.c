#include "header.h"

/**
 * type_prompt - prompts the user for a command?
 * Return: nothingness
 */
void type_prompt(void)
{
static int first_time = 1;
if (first_time)
{
const char *CLEAR_SCREEN_ANSI = " \033[1;1H\033[2J";
write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
first_time = 0;
}
printf("#");
}
