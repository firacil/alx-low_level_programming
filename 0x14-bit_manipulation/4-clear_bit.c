#include "main.h"

/**
 * clear_bit - set the value of bit to 0.
 * @index: index.
 * @n: numbers.
 * Return: 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n & (~i);
	return (1);
}
