#include "main.h"

/**
 * _strspn - gets length of prefix strings.
 * @s: input
 * @accept: input
 * Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int so, f, value, check;

	value = 0;

	for (so = 0; s[so] != '\0'; so++)
	{
		check = 0;

		for (f = 0; accept[f] != '\0'; f++)
		{
			if (accept[f] == s[so])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
			return (value);
	}

	return (value);
}
