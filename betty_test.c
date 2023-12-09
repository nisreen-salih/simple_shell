#include <stdio.h>

/**
 * main - print pointer
 *
 * Return: 0
 */

int main(void)
{
	int x = 5;
	int *p = &x;

	printf("%p \n", p);
	printf("%d\n ", *p);

	return (0);
}
