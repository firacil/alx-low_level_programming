#include "main.h"

/**
 * _pow_recursion - returns the value of x.
 * @x: integer to be returned.
 * @y: integer.
 * Return: integer.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
