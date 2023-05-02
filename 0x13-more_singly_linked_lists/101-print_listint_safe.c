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
	const listint_t *temp = head, *prev;

	if (head == NULL)
		exit(98);

	while (temp != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		prev = temp;
		temp = temp->next;
		if (prev <= current)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}

	return (count);
}
