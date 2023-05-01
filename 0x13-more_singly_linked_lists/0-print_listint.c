#include "lists.h"

/**
 * print_listint - prints all elements of alist
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i, count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	for (i = 0; i < count - 1; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count)
}
