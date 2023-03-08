#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns a square root of a numbers.
 * @n: numbers.
 * Return: Integer.
 */

int _sqrt_recursion(int n)
{
	return (_sqroot(n, 1));
}

/**
  * _sqroot - Calculate square root
  * @n: number to be calculated.
  * @i: iteration.
  * Return: the natural square root
  */

int _sqroot(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqroot(n, i + 1));
}
