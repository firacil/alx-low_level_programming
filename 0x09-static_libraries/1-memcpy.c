#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: input 1.
 * @src: number input 2.
 * @n: length.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int sosi;

	for (sosi = 0; sosi < n; sosi++)

		dest[sosi] = src[sosi];

	return (dest);
}
