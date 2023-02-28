#include "main.h"

/**
 * print_rev - reverse the string.
 * @s: string to be reversed.
 * Return: none.
 */

void print_rev(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
	f++;
	}

	for (f -= 1; f >= 0; f--)
	{
	_putchar(s[f]);
	}
	_putchar('\n');
}
