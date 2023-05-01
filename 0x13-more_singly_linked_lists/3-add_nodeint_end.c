#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: pointer to the head
 * @n: integer element of node
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = NULL;
	listint_t *previous;

	if (head == NULL)
		return (NULL);

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;
	if (head->next == NULL)
	{
		*head = last_node;
	}
	else
	{
		previous = *head;
		while (previous->next != NULL)
			previous = previous->next;

		previous->next = last_node;
	}

	return (last_node);
}
