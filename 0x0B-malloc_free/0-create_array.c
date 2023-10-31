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

	str = malloc((size + 1) * sizeof(*str));
	if (size == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
