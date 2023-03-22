#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array.
 * @size: size of an array.
 * @cmp: function pointer used to be comparing values.
 * Return: Integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (f = 0; f < size; f++)
		{
			if (cmp(array[f] != 0)
				return (f);
		}
	}
	return (-1);
}
