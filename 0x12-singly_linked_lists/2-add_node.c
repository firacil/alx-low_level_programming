#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginnig of LL.
 * @head: Linked list.
 * @str: string
 * Return: Address or Null.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *buf;

	if (head != NULL && str != NULL)
	{
		buf = malloc(sizeof(list_t));
		if (buf == NULL)
			return (NULL);
		buf->str = strdup(str);
		buf->len = _str(str);
		buf->next = *head;

		*head = buf;


		return (buf);
	}

	return (0);
}
/**
 * _str - return strings length.
 * @c: string count.
 * Return: length.
 */

int _str(const char *c)
{
	int f = 0;

	while (*c)
	{
		c++;
		f++;
	}
	return (f);
}
