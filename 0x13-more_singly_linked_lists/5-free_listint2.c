#include "lists.h"

/**
 * free_listint2 - free memory used by linked list.
 * @head: pointer to pointer of node.
 * Return: None.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
