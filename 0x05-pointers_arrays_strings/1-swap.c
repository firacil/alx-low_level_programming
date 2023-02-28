#include "main.h"

/**
 * swap_int -swaps the value of two integers.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
