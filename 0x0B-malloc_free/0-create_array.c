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
	int i;
	char *str;

	str = malloc(size * sizeof(*str));
	if (size == 0 && str == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
