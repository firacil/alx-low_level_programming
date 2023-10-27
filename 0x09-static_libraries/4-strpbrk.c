#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input.
 * @accept: input.
 * Return: strings or Null.
 */

char *_strpbrk(char *s, char *accept)
{
	int f, so;

	for (f = 0; s[f] != '\0'; f++)
	{
		for (so = 0; accept[so] != '\0'; so++)
		{
			if (s[f] == accept[so])
				return (s + f);
		}
	}

	return (NULL);
}
