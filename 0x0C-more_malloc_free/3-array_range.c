#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of value
 * @max: maxiumum range of values & number of elements.
 * Return: pointer to the new array.
 */

int *array_range(int min, int max)
{
	int *pt;
	int i, siz;

	if (min > max)
		return (NULL);

	siz = max - min + 1;

	pt = malloc(sizeof(int) * siz);

	if (pt == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pt[i] = min++;

	return (pt);
}
