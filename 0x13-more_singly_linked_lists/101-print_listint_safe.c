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
	const listint_t *current, *next;

	if (head == NULL)
		return (98);

	current = next = head;

	while (current && next && next->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;
		next = next->next->next;

		if (current == next)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			count++;

			current = current->next;
			while (current != next)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				count++;
				current = current->next;
			}
			printf("-> [%p] %d\n", (void *)current, current->n);
			count++;

			return (98);
		}
	}

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}

	return (count);
}
