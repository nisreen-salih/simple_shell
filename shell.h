#ifndef _SHELL_H
#define _SHELL_H
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**#include <sys/types>
#include <sys/star.h>
#include <sys/wait.h>
*/#define BUFFER_SIZE 1024
/**exturn char **environ;*/
void prompt(void);
void  clean_input(char *input, char *output);
char *read_input(void);
char *get_location(char *command);
int extract_args(char *input, char *args[16]);
int execute(char *cmd);
void print_environment(void);
int handle_exit(char *input);
int check_for_exit(char *input);
void free_args(char *args[16], int n);
void free_cmd(char *command, char *arg);
void execute_free(char *i, char *c, char *ar[16], int len, unsigned int f);
int check_for_path(char *cmd);
int is_number(char *in);
void print_exit_error(char *msg, char *args[16]);



#endif
