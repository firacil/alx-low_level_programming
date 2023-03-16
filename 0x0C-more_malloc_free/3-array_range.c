#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: minimum number.
 * @max: maximum number.
 * Return: pointer or Null.
 */

int *array_range(int min, int max)
{
	int a = 0;
	int *i;

	if (min > max)
		return (NULL);

	i = malloc((max - min) * sizeof(int) + sizeof(int));
	if (i == NULL)
		return (NULL);
	while (min <= max)
	{
		i[a] = min;
		a++;
		min++;
	}
	return (i);
}
