#include "lists.h"

/**
 * get_node_at_index - remove the first item.
 * @head: pointes to first node.
 * @index: no of index.
 * Return: value of node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int f = 0;
	listint_t *nindex = head;

	if (head == NULL)
	{
		return (0);
	}

	while (f < index)
	{
		if (head == NULL)
			return (NULL);
		nindex = head->next;
		head = nindex;
		++f;
	}
	return (nindex);
}
