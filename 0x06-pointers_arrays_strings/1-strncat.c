#include "main.h"

/**
 * _strncat - concatnate two strings.
 * @dest: first string.
 * @src: second string.
 * @n: integer number to be tested.
 * Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	while (dest[index++])
	length++;
	for (index = 0; src[index] && index < n; index++)

	dest[length++] = src[index];
	return (dest);
}
