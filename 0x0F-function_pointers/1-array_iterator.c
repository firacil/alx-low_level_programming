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
	unsigned int index;

	if (!action || !array)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
