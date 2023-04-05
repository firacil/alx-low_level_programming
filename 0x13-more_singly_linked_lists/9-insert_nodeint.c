#include "lists.h"

/**
 * insert_node_at_index - sum the value.
 * @head: pointes to first node
 * @idx: index of list.
 * @n: number value.
 * Return: value of node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int f = 1;
	listint_t *i_node = *head;
	listint_t *ins;
	listint_t *hd = *head;

	if (head == NULL)
		return (NULL);
	while (f < idx)
	{
		i_node = (*head)->next;
		*head = i_node;
		++f;
	}
	ins = malloc(sizeof(listint_t));


	if (ins == NULL)
		return (NULL);
	ins->n = n;
	if (idx == 0)
	{
		ins->next = *head;
		*head = ins;
	}
	else
	{
		ins->next = (*head)->next;
		(*head)->next = ins;
		*head = hd;
	}
	return (ins);
}
