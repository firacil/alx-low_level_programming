#include "lists.h"

/**
 * print_dlistint - prints all elements in Doubly LL.
 * @h: head pointer
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
