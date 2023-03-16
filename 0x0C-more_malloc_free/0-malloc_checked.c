#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory.
 * @b: total of int numbers.
 * Return: Pointer or Null.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *) malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		return (98);
	}
	else
	{
		printf("%p\n", (void *)ptr);
	}
}

