#ifndef _SHELL_H
#define _SHELL_H
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/star.h>
#include <sys/wait.h>
#define BUFFER_SIZE 1024
void propmt(void);
char clean_input(char *input, char *output);
char *read_input(void);




#endif
