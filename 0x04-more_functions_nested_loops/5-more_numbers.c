#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14.
 * Return: none.
 */

void more_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar(' ');
		c++;
	}

	_putchar('\n');
}
