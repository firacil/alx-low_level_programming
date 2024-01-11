#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of LL.
 * @head: pointer to first node.
 * @index: location of elements.
 * Return: nth node or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	return (head);
}
