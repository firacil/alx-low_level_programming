#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns a number of elements in linked list.
 * @h: LL.
 * Return: numbers.
 */

size_t list_len(const list_t *h)
{
	size_t no = 0;

	while (h)
	{
		h = h->next;
		no++;
	}

	return (no);
}
