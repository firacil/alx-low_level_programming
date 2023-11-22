#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of LL.
 * @head: pointer to the first node.
 * Return: Sum of nodes data / 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
