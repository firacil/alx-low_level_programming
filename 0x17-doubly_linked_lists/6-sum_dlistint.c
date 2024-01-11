#include "lists.h"

/**
 * sum_dlistint - return sum of all the data in DLL.
 * @head: pointer to first node.
 * Return: sum or o
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
