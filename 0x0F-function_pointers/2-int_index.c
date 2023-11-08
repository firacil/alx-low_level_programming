#include "function_pointers.h"

/**
 * int_index - search for integer.
 * @array: where integer to be searched.
 * @size: size of an array.
 * @cmp: function pointer that make comparsion.
 * Return: index of 1st element / -1 if not match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1)
}
