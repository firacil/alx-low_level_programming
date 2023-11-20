#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a LL.
 * @head: pointer to pointer of the node.
 * @n: element to be added at the end.
 * Return: the address of the new element/NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	temp = (*head);
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}
	
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
