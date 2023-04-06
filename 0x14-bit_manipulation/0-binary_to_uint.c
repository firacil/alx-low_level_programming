#include "main.h"

/**
 * binary_to_uint - converts binary number to integer.
 * @b: binary strings.
 * Return: 0 or NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int len = strlen(b);
	int t = 0;
	int dval = 1;


	if (i > 97 && b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			t += dval;
			dval *= 2;
	}
	return (t);
}
