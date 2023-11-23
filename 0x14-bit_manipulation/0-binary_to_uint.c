#include "main.h"

/**
 * int binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to binary number.
 * Return: converted or 0 if fail.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i, dec = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			val += dec;
		}
		dec *= 2;
	}
	return (val);
}

/**
 * _strlen - track length of the string.
 * @s: strings
 * Return: len
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
