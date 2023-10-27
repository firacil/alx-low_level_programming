#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a charachter in string.
 * @s: string.
 * @c: charachter.
 * Return: charachter or Null.
 */

char *_strchr(char *s, char c)
{
	int sosi;

	for (sosi = 0; s[sosi] >= '\0'; sosi++)
	{
		if (s[sosi] == c)

			return (s + sosi);

	}
	return (NULL);
}
