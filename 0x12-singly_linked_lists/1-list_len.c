#include "lists.h"

/**
 * list_len - returns the number of elements of LL.
 * @h: head of LL.
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	int c_node = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		c_node++;
	}
	return (c_node);
}
