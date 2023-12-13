#include "shell.h"

void execute(char *input, char **arr)
{
	pid_t i;

	i = fork();

	if (i == 0)
	{
		execve(input, arr, NULL);
	}
	else
	{
		wait(NULL);
	}
	
}
