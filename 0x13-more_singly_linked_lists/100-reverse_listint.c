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
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		prvious = current;
		current = next;
	}

	*head = previous;
	return (head);
}
