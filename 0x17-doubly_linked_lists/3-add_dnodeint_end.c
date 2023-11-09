#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a dlistint_t list
 * @head: pointer to the first node
 * @n: data of the new node
 *
 * Return: pointer to the new address otherwise NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	new->prev = temp;
	temp->next = new;

	return (new);
}
