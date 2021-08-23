#ifndef _HEADER_H_
#define _HEADER_H_
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
int main(void);
void read_command(char cmd[], char *par[]);
void type_prompt(void);
#endif
