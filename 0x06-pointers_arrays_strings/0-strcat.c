#include "main.h"

/**
 * *_strcat - concatenate two strings.
 * @dest: the first string.
 * @src: the 2nd string.
 * Return: charachter.
 */

char *_strcat(char *dest, char *src)
{
	int cat = 0, i;

	while (dest[cat])
	{
	cat++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[cat] = src[i];
		cat++;
	}

	dest[cat] = '\0';
	return (dest);
}
