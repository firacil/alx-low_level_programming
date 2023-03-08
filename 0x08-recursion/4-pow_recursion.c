#include "main.h"

/**
 * int _pow_recursion - return power of numbers.
 * @x: number to be powered.
 * @y: power number.
 * Return: integer.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x ^ y));
}
