#include "lists.h"

/**
 * add_node_end - add a node at the end of LL.
 * @head: pointer to head.
 * @str: string.
 * Return: address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
