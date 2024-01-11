#include "lists.h"

/**
 * add_dnodeint_end - add node at the end.
 * @head: pointer to first node.
 * @n: data to be added.
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = (*head);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	new->prev = temp;

	return (new);
}
