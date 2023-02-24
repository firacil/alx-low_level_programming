#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4.
 * Return: none.
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)

			_putchar(c + '0');
		else
			continue;
	}

	_putchar('\n');

}
