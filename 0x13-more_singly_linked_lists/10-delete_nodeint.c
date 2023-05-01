#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of given position
 * @head: pointer to head
 * @index: index of list to be deleted
 *
 * Return: 1 on success, else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previous, *next;
	unsigned int i, count;

	count = 0;
	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (count == 0 || index > count)
		return (-1);

	temp = *head;
	for (i = 0; i <= index; i++)
	{
		if (index == 0)
		{
			next = temp->next;
			free(temp);
			return (1);
		}
		if (i == index - 1)
			previous = temp;
		if (i == index && index == count - 1)
			break;
		if (i == index)
		{
			next = temp;
			break;
		}
		temp = temp->next;
	}

	temp = previous->next;
	previous->next = next;
	free(temp);

	return (1);

}
