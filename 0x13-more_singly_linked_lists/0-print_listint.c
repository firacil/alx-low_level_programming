#include "lists.h"

/**
 * print_listint - prints all elements in LL.
 * @h: head of the node.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int countnode = 0;

	temp = h;
	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		countnode++;
	}
	return (countnode);
}
