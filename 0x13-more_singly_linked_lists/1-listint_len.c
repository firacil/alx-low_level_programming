#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: number of the element.
 * Return: node.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (i);
}
