#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to head node
 * @index: the nth node
 *
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i, count;

	if (head == NULL)
		return (NULL);

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (index > count - 1)
		return (NULL);

	current = head;
	for (i = 0; i <= index; i++)
	{
		if (i == index)
			break;
		current = current->next;
	}

	return (current);
}

