#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: number flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f;

	for (f = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			f++;
	}
	return (f);
}
