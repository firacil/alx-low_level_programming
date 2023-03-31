#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add new node at the end of LL.
 * @head: LL.
 * @str: string to be added.
 * Return: Address or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *buf;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _str(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			buf = *head;
			while (buf->next)
				buf = buf->next;

			buf->next = new;
			return (buf);
		}
	}

	return (NULL);
}

/**
 * _str - length of string.
 * @c: string counted.
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
