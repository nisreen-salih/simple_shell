#include "shell.h"

/**
 * main - simple shell program
 *
 * Return: 0
 */

int main(void)
{
	char *input;
	size_t buf;
	ssize_t d;
	char *tok;
	char **arr = NULL;
	int i = 0;

	while (true)
	{
		if (d == -1)
		{
			write(1, "\n", 1);
			break;
		}
		write(1, "#cisfun$", 8);
		write(1, " ", 1);
		d = getline(&input, &buf, stdin);
		tok = strtok(input, " ");
		arr = malloc(30);
		while (tok != NULL)
		{
			arr[i] = tok;
			tok = strtok(NULL, " ");
			printf("%s\n", arr[i]);
			i++;
		}
	}
	return (0);
}
