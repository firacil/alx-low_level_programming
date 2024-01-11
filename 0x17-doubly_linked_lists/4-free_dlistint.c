#include  "lists.h"

/**
 * free_dlistint - function to free doubly Linked lists.
 * @head: pointer to first node.
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
