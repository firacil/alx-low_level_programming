#include "lists.h"

/**
 * add_node - add a new node at beginnig of LL.
 * @head: head of the node.
 * @str: string.
 * Return: address or NULL if fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;
	
	return (*head);
}
