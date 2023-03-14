#include "main.h"

/**
 * create_array - creates an array of charachter.
 * @c: charachter.
 * @size: is the number of byte of choosen data type.
 * Return: pointer or Null.
 */

char *create_array(unsigned int size, char c)
{
	char *c;

	c = malloc(sizeof(*c) * 1);
	c[0] = '';

	if (size == 0)
	{
		return (NULL);
	}
	if (c == NULL)
	{
		return (*c);
	}
}
