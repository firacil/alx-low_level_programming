#include "lists.h"

/**
 * get_nodeint_at_index - return node at given location.
 * @head: pointer to the first node.
 * @index: position of the node starting from zero.
 * Return: the address of nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
