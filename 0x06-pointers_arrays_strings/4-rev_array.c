#include "main.h"

/**
 * reverse_array - Reverses content of an array of integers.
 * @a: The array to be reversed.
 * @n: number of elements in array.
 *Return: none.
 */

void reverse_array(int *a, int n)

{

	init tmpo, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmpo = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}

}
