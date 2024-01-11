#include "lists.h"

/**
 * add_dnodeint - adds a newnode at beggining.
 * @head: pointer to fisr node.
 * @n: data to be added
 * Return: address of new element or Null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;
	return (new);
}
