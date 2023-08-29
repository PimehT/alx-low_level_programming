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
	const listint_t *current = head, *prev;

	if (head == NULL)
		return (98);

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		prev = current;
		current = current->next;
		if (prev <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (98);
		}
	}

	return (count);
}

