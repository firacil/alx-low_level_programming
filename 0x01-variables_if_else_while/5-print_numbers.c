#include <stdio.h>

/**
 * main - prints a base 10 digits followed by new line.
 * Return: 0.
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	putchar('\n');
	return (0);
}
