#include "lists.h"

/**
 * free_listint - free malloc.
 * @head: pointes to first node.
 * Return: none.
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
