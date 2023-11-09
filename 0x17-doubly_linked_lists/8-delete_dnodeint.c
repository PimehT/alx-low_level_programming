#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of a dlistint_t list
 * @head: pointer to the first node
 * @index: index of node to delete, index starts from 0
 *
 * Return: 1 on success, otherwise -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = NULL;
	dlistint_t *prev = NULL;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current->next != NULL && i != index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current->next == NULL && i != index)
		return (-1);

	prev->next = current->next;
	if (current->next == NULL)
		current->next->prev = prev;

	free(current);
	return (1);
}
