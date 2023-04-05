#include "lists.h"

/**
 * free_listint2 - free malloc.
 * @head: pointes to first node.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
