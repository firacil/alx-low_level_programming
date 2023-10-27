#include "main.h"

/**
 * _memset - fills memory with constant bytes.
 * @s: the pointer to charachter.
 * @b: charachter.
 * @n: unsigned integer.
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int sosi;

	for (sosi = 0; sosi < n; sosi++)

		s[sosi] = b;
	return (s);
}
