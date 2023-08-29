#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: pointer to first node
 * @n: data of new node
 *
 * Return: address of new node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *temp;

	if (head == NULL)
		return (NULL);

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = last_node;

	return (last_node);
}
