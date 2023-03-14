#include "main.h"

/**
 * create_array - creates an array of charachter.
 * @c: charachter.
 * Return: pointer or Null.
 */

char *create_array(unsigned int size, char c)
{
	char *c;
	
	c = malloc(sizeof(*c) * 1);
	c[0] = ' ';

	if (size == 0)
	{
		return (NULL);
	}
	if (c == NULL)
	{
		return(NULL);
	}
}
