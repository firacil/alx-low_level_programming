#include "lists.h"

/**
 * get_node_at_index - remove the first item.
 * @head: pointes to first node.
 * @index: no of index.
 * Return: value of node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int i = 0;
	listint_t *n_index = head;

	if (head == NULL)
	{
		return (0);
	}

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		n_index = head->next;
		head = n_index;
		++i;
	}
	return (n_index);
}
