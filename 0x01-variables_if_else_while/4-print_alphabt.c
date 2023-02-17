#include <stdio.h>

/**
 * main - prints the lowercase alphabet except q & e.
 * Return: 0.
 */

int main(void)
{
	char c = 'a';

	while
		(c <= 'z')
	{
		if (c != 'q' && c != 'e')
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
