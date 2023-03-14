#include "main.h"

/**
 * create_array - creates an array of charachter.
 * @c: charachter.
 * @size: is the number of byte of choosen data type.
 * Return: pointer or Null.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(sizeof(*str) * 1);
	str[0] = 'H';

	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (*str);
	}
}
