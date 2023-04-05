#include "lists.h"

/**
 * sum_listint - sum of the list.
 * @head: pointes to first node.
 * Return: node value.
 */

int sum_listint(listint_t *head)
{
	unsigned int f = 0;
	listint_t *n_index = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		f += head->n;
		n_index = head->next;
		head = n_index;
	}
	return (f);
}
