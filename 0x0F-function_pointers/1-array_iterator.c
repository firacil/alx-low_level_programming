#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - excutes a function given as parameter on each element of the array.
 * @array: array element.
 * @size: size of array.
 * @action: function pointer.
 * Return: None.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (!action || !array)
		return;
	for (f = 0; f < size; f++)
		action(array[f]);
}
