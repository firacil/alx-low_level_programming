#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns a prime numbers.
 * @n: number to be tested.
 * Return: 0 or 1.
 */

int checkp(int n, int i);


int is_prime_number(int n)
{
	return (checkp(n, 1));
}

/**
  * checkp - Checks if a number is prime
  * @n: number to be checked.
  * @i: iteration occurs.
  * Return: 1 or 0.
  */
int checkp(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (checkp(n, i + 1));
}
