#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list.
 * @head: pointer to the first node
 *
 * Return: the sum of all data, otherwise 0
*/
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
