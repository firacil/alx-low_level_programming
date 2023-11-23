#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *	 need to flip to get from one number to another.
 * @n: the first number i wanna go from.
 * @m: the second number i wanna go to.
 * Return: number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bit = 0;

	while (x > 0)
	{
		bit += (x & 1);
		x >>= 1;
	}

	return (bit);
}
