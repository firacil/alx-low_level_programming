#include "function_pointers.h"

/**
 * array_iterator - excute parameter given from arr.
 * @array: array of integer.
 * @size: size of integer.
 * @action: function pointer to array.
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index;

	if (!action || !array)
		return;

	index = 0;
	while (index < size)
		(*action)(array[index]);
		index++;
}
