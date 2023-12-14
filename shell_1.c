#include "shell.h"

/**
 * main - simple shell
 *
 * Return: 0
 */

int main(void)
{
	char *input;
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
			break;
		}

	}
	return (0);
}
