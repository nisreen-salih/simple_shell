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
/**
 * read_input: the point entry of the code
 *
 * Return: 0 Success
 *
*/
char read_input(void)
{
	char *input = Null;
	char *output = Null;
	size_t input_size = 0;
	ssize_t read;

	while (1)
	{
		read = getline(&input, &input_size, stdin);
		if (read == -1)
		{
			free(input);
			exit(EXIT_SUCCESS);
		}
		input[strcspn(input, "\n")] = '\0';

		if (input[0] == '#')
		{
			free(input);
			return (strdup(" "));
		}
		break;
	}
	output = malloc(sizeof(char) * (strlen(input) + 1));
	if (output == Null)
	{
		free(input);
		return (Null);
	}
	clean_input(input, output);
	free(input);
	return (output);
}
