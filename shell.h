#ifndef _SHELL_H
#define _SHELL_H
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**#include <sys/types>
#include <sys/star.h>
*/
#include <sys/wait.h>
#define BUFFER_SIZE 1024
exturn char **environ;
void propmt(void);
char clean_input(char *input, char *output);
char *read_input(void);
char *get_location(char *command);
int extract_args(char *input, char*args[16]);
int execute(char *cmd);
void print_environment(void);
int handle_exit(char *input);
int check_for_exit(char *input);


#endif
