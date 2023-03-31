#include "lists.h"

/**
 * print_list - prints all the elements of linked list.
 * @h: linked list to be printed.
 * Return: nodes.
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	int n;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
