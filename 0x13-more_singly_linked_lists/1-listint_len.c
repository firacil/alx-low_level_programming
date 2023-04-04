#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: number of the element.
 * Return: node.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		h = new;
	}
	else
	{
		h = h->next;
		i++;
	}
	return (i);
}
