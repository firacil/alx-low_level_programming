#include "main.h"

/**
 * create_array - creates array of chars.
 * @size: size of array.
 * @c: actual charachter.
 * Return: pointer to char.
 *
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *str;

	if (size == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		str = malloc((size + 1) * sizeof(*str));
		str[i] = 'o';
		i++;
	}
	str[i] = '\0';
	return (str);
}
