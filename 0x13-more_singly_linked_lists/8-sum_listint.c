#include "lists.h"

/**
 * sum_listint - sum of all the data (n) in listint_t list
 * @head: pointer to head node
 *
 * Return: sum
 * else 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

