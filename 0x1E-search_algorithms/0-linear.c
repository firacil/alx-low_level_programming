#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers using LSA
 * @array: array given
 * @size: the number of element in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] != value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			}
			else
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
		}
		return (-1);
	}
}
