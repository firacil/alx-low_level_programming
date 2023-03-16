#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory.
 * @b: total of int numbers.
 * Return: Pointer or Null.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
