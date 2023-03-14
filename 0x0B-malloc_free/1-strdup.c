#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to new memory space.
 * @str: string.
 * Return: Pointer or NULL.
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *sosi;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	sosi = malloc((sizeof(char) * i) + 1);

	if (sosi == NULL)
		return (NULL);

	while (a < i)
	{
		sosi[a] = str[a];
		a++;
	}

	sosi[a] = '\0';
	return (sosi);
}
