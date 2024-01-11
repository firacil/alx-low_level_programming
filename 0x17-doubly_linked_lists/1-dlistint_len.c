#include "lists.h"

/**
 * dlistint_len - returns number of elements in doubly LL.
 * @h: head pointer
 * Return: return number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
