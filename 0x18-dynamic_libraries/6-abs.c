#include "main.h"

/**
 * _abs - works on value of integer.
 * @n: numbers.
 * Return: number or 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
