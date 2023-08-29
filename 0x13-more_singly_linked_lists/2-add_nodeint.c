#include "lists.h"

/**
 * add_nodeint - add node at the beginning of the list
 * @head: pointer to first node
 * @n: data of new node
 *
 * Return: address to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (*head);
}
