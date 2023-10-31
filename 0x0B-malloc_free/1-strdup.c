#include "main.h"

/**
 * _strdup - pointer to copy of charachter pointer.
 * @str: charachter
 * Return: Null if str is Null / pointer to copy.
 */

char *_strdup(char *str)
{
	char *cp;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	i = 0, len = 0;
	while (str[i])
	{
		len++;
		i++;
	}

	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);

	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[len] = '\0';

	return (cp);
}
