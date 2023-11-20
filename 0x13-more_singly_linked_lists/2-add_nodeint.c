#include "lists.h"

/**
 * add_nodeint - add a new node at the beggining.
 * @head: pointer to pointer to the node.
 * @n: element of the node to be added.
 * Return: address of new element or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
