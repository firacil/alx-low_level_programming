#include "lists.h"

/**
 * pop_listint - remove first item of linked list.
 * @head: pointes to first node.
 * Return: value of node.
 */

int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	val = (*head)->n;
	free(*head);
	*head = next_node;

	return (val);
}
