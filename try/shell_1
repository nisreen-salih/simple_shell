#include "shell.h"

/**
 * main - simple shell
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char *input;
	char **arr = NULL;
	char *tok;
	size_t buf;
	ssize_t ctd;

	while (true)
	{
		if (isatty(STDIN_FILENO))
		{
			write(1, "#cisfun$", 9);
			write(1, " ", 1);
		}
		ctd = getline(&input, &buf, stdin);
		if (ctd == -1)
		{
			write(1, "\n", 1);
			break;
		}
		tok = strtok(input, " ");
		arr = malloc(20);
		while (tok != NULL)
		{
			arr[i] = tok;
			tok = strtok(NULL, " ");
			i++;
		}
		arr[i] = NULL;
		execute(input, arr);


	}
	free(input);
	return (0);
}
