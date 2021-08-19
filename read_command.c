#include "header.h"

/**
 * read_command - does just that
 * @cmd: command to be read
 * @par: pointer to arguments for the command
 * Return: nothingness
 *
 */
void read_command(char cmd[], char *par[])
{
char line[1024];
int count = 0, i = 0, j;
char *array[100], *pch;
for (;;)
{
int c = fgetc(stdin);
line[count++] = (char) c;
if (c == '\n')
break;
}
if (count == 1)
return;
pch = strtok(line, " \n");
while (pch != NULL)
{
array[i++] = strdup(pch);
pch = strtok(NULL, " \n");
}
strcpy(cmd, array[0]);
for (j = 0; j < 1; j++)
par[j] = array[j];
par[i] = NULL;
}
