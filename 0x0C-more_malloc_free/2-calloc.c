#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array.
 * @nmemb: is an array.
 * @size: size of an array.
 * Return: pointer or Null.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	arr = malloc(j);

	if (arr == NULL)
		return (NULL);
	
	while (i < 1)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
