#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = head, *temp;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		size += sizeof(listint_t);
		temp = current;
		current = current->next;
		free(temp);
	}

	return (size);
}
