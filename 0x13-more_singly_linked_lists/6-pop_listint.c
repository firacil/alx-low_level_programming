#include "lists.h"

/**
 * pop_listint - delete the head node.
 * @head: pointer to pointer to the node.
 * Return: head node data or 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp; /* copy of current head */
	int d = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head; /* stores head pointer in temp */
	d = temp->n;

	*head = (*head)->next;

	free(temp); /* free memory */
	return (d);
}
