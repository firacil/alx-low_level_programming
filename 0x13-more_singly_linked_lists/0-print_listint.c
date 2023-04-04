#include "lists.h"

/**
 * print_listint - prints all elements in linked list.
 * @h: pointer to node to be printed.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int i;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
