#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a LL.
 * @head: pointer to the first node.
 * Return: None.
 */

void free_list(list_t *head)
{
	list_t *buf;

	while (head)
	{
		buf = head;
		head = head->next;
		free(buf->str);
		free(buf);
	}

	free(head);
}
