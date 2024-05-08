#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 * @array:  pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);

			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	return (-1);
}
