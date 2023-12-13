#include "shell.h"
/**
 * prompt: The entry point of the code to print "$"
 * Return: 0 Success
 */
void prompt(void)
{
	write(1, "$", 2);
}
/**
 * clean_input: This function serves as the entry point of the code
 * @input: What the user enters
 * @output: What is printed for the user
 * Rerutn: 0 Success
 */
void clean_input(char *input, char *output)
{int i, cd = 0;

	if (input == '#')
	{
		output[i] = '\0';
		return;
	}
	while (*input != '\0')
	{
		if (input == '#')
		{
			input--;
			if (*input == ' ')
			{
				input++;
				break;
			}
			input++;
			cd = 1;
			output[i++] = *input;
		}
		cd = 1;
		output[i++] = *input;
	}
	else if (cd == 1)
	{
		while (*input != '\0')
		{
			if (*input != ' ')
			{
				output[i++] == ' ';
				input--;
				break;
			}
			input++;
		}
		input++;
	} output[i] = '\0';
}

