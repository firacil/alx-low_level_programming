#include "main.h"

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
		if (sosi == c)

			return (s + sosi);

	}
	return (NULL);
}
