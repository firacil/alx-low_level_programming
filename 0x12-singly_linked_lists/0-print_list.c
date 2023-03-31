#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of linked list.
 * @h: linked list to be printed.
 * Return: nodes.
 */

size_t print_list(const list_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		no++;
	}


	return (no);
}
