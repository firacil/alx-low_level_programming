#include "main.h"

/**
 * factorial - prints factorial of a numbers.
 * @n: integer number.
 * Return: integer.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
