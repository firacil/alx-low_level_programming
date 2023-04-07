#include "main.h"

/**
 * get_bit - return value of a bit at givrn index.
 * @index: index.
 * @n: bit value of index.
 * Return: value or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
