#include "lists.h"

/**
 * print_list - prints all the elements of list_t.
 * @h: head of linked list.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	int c_node = 0;

	temp = h;

	while (temp != 0)
	{
		if (temp->str == NULL)
		{
			printf("[%d] (nil)\n", temp->len);
			temp = temp->next;
			c_node++;
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			c_node++;
		}
	}
	return (c_node);
}
