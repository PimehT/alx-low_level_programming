#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	if (temp == NULL)
		return (count);

	while (temp = NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
