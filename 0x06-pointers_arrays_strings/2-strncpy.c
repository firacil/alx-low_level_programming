#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string to be copied to.
 * @src: string to be copy.
 * @n: byte given.
 * Return: character.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	while (src[index++])
		length++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (length = 0; index < n; index++)
		dest[index] = '\0';
		return (dest);
}
