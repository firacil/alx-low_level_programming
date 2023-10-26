#include "main.h"

/**
 * _sqrt_recursion - square root of natural number.
 * @n: integer.
 * Return: integer.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_rec(n, 0));
}

/**
 * natural_rec - natural recursion pro.
 * @n: integer number.
 * @i: integer.
 * Return: integer.
 */

int natural_rec(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_rec(n, i + 1));
}
