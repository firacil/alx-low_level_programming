#include <stdio.h>

/**
 * main - prints a 16 base in lower case.
 * Return: 0.
 */

int main(void)
{
	int a;
	char c;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);

	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
