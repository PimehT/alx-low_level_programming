#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of the list
 * @head: head pointer
 * @n: integer value in the node
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = *head;

	if (*head == NULL || **head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
