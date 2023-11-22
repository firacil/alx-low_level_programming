#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the node.
 * @idx: position of the node.
 * @n: data to be added to new node.
 * Return: address of new node/ NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = (*head), *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
