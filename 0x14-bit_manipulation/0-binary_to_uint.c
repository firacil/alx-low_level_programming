#include "main.h"

/**
 * binary_to_uint - converts binary number to integer.
 * @b: binary strings.
 * Return: 0 or NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		val = val << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			val = val | 1;
		b++;
	}
	return (val);
}
