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
	listint_t *temp, *previous, *next, *new_node;
	unsigned int i, count;

	temp = *head;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (count == 0 || idx > count)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	temp = *head;
	for (i = 0; i <= idx; i++)
	{
		if (i == idx - 1)
			previous = temp;
		if (i == idx)
		{
			next = temp;
			break;
		}
		temp = temp->next;
	}

	previous->next = new_node;
	new_node->n = n;
	new_node->next = next;

	return (new_node);
}
