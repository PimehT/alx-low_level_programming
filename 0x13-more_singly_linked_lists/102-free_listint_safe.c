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
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (NULL);

	while (*h != NULL)
	{
		size += sizeof(listint_t);
		if ((*h)->next >= *h)
		{
			temp = *h;
			*h = NULL;
			free(temp);
			break;
		}
		else
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
	}
	*h = NULL;

	return (size);
}
