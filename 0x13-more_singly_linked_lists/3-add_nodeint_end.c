#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a linked list.
 * @head: pointes to nodes.
 * @n: constant.
 * Return: new or null.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
