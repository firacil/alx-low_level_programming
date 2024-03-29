#include "main.h"

/**
 * _strdup - pointer to copy of charachter pointer.
 * @str: charachter
 * Return: Null if str is Null / pointer to copy.
 */

char *_strdup(char *str)
{
	char *cp;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	cp[len] = '\0';

	return (cp);
}
