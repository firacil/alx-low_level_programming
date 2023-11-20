#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked.
 * @h: head of the node.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;

	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
