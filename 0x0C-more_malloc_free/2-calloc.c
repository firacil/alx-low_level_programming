#include "main.h"

/**
 * _calloc - allocates memory for an array of a certain number entity of elements...
 * @nmemb: no of elements.
 * @size: byte size of each array element.
 * Return: Null or pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *filr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	filr = m;

	for (i = 0; i < (size * nmemb); i++)
		filr[i] = '\0';

	return (m);
}
