#include "main.h"

/**
 * print_line - prints line on the terminal.
 * @n: its the number of times.
 * Return: 1 or 0.
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
