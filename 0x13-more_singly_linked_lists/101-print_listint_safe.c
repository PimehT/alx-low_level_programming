#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head;

	if (head == NULL)
		return (98);

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}
