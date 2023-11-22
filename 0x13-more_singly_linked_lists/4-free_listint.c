#include "lists.h"

/**
 * free_listint - free memory of linked list.
 * @head: pointer to the first node.
 * Return: None.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;


	free_listint(head->next);

	free(head);
}
