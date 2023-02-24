#include "main.h"

/**
 * print_diagonal - prints a diagonal line.
 * @n: number of charachter "\".
 * Return: 0 or n.
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
