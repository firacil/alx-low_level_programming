#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of LL.
 * @head: pointer to pointer to first node.
 * @index: index or position of the node.
 * Return: 1 at success and -1 at fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;

	while (i != index - 1 && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (i == index - 1 && temp->next != NULL)
	{
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
		return (1);
	}
	return (-1);
}
