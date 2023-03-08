include "main.h"

/**
 * _sqrt_recursion - returns a square root of a numbers.
 * @n: numbers.
 * Return: Integer.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_recursion(n) * n);
}
