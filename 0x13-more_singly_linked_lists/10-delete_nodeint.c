#include "lists.h"

/**
 * delete_node_at_index - delete node in index.
 * @head: pointer to first node of list.
 * @index: index of list.
 * Return: Value of node.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *temp = *head;
	listint_t *a_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (f < index - 1)
	{
		temp = temp->next;
		++f;
		if(!temp)
			return (-1);
	}
	a_node = temp->next->next;
	free(temp->next);
	temp->next = a_node;
	return (1);
}
