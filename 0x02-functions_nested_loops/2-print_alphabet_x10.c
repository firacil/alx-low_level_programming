#include <stdio.h>

/**
 * print_alphabet_x10- prints alphabet ten times.
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int b = 0;

	while (b <= 9)
	{

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	b++;
	}
}
