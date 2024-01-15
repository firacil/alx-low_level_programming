#include "main.h"

/**
 * _puts - prints a string.
 * @s: tested charachter.
 * Return: none.
 */

void _puts(char *s)
{
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
