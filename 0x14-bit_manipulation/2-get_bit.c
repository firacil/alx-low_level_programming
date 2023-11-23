#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value with base 10.
 * @index: index(position) to be given.
 * Return: value or error(-1).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
