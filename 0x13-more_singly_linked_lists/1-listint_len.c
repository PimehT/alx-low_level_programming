#include "lists.h"

/**
 * listint_len - counts the number of elements of listint_t
 * @h: pointer to first node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
