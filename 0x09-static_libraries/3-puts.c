#include "main.h"

/**
 * _puts - prints a string.
 * @str: tested charachter.
 * Return: none.
 */

void _puts(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
