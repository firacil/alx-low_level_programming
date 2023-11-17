#include "lists.h"

/**
 * free_list - free memory space used by LL.
 * @head: head of LL.
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
	}
}
