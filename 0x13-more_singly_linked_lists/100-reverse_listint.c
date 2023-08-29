#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node
 *
 * Return: pointer to new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = previous;
		previous = current;
		current = *head;
	}

	*head = previous;
	return (previous);
}

