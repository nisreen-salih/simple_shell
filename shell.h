#ifndef SHELL1_H
#define SHELL1_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>

void execute(char *input, char **arr);

#endif
