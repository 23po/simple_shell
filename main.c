#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include "header.h"

/**
 * main - does the main thing of prompting a command, reading, and executing?
 * Return: bring int back
 */

int main(void)
{
char cmd[100], command[100], *parameters[20];
char *envp[] = { (char *) "PATH=/bin", 0 };
while (1)
{
type_prompt();
read_command(command, parameters);
if (fork() != 0)
wait(NULL);
else
{
strcpy(cmd, "/bin/");
strcat(cmd, command);
execve(cmd, parameters, envp);
}
if (strcmp(command, "exit") == 0)
break;
}
return (0);
}
