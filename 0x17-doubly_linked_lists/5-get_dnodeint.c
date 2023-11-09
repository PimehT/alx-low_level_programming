#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t liked list
 * @head: pointer to the first node
 * @index: the index of the node starting from 0
 *
 * Return: node otherwise, NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	if (current == NULL)
		return (0);
	i = 0;
	while (current != NULL)
	{
		i++;
		current = current->next;
		if (i == index)
			return (current);
	}

	return (0);
}
