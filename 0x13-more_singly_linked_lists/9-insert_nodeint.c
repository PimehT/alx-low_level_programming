#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at given index
 * @head: pointer to head node
 * @idx: index to insert node
 * @n: data of node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *current, *previous, *next;
	unsigned int i, count = 0;

	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (count == 0 || idx > count)
		return (NULL);

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	temp = *head;
	for (i = 0; i <= idx; i++)
	{
		if (i == idx - 1)
			previous = temp;
		if (i == idx)
		{
			current = temp;
			temp = temp->next;
			next = temp;
			break;
		}
		temp = temp->next;
	}

	current->n = n;
	previous->next = current;
	current->next = next;
	*head = previous;

	return (current);
}
