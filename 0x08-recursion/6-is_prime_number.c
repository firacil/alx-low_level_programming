#include "main.h"

/**
 * is_prime_number - result of prime number.
 * @n:integer number.
 * Return: number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_pr(n, n - 1));
}

/**
 * actual_pr - actual prime no.
 * @n: number.
 * @i: integer.
 * Return: integer number.
 */

int actual_pr(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_pr(n, i - 1));
}
