#include "lists.h"

/**
 * get_node_at_index - remove the first item.
 * @head: pointes to first node.
 * @index: no of index.
 * Return: value of node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node_index = head;

	if (head == NULL)
	{
		return (0);
	}

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		node_index = head->next;
		head = node_index;
		++i;
	}
	return (node_index);
}
