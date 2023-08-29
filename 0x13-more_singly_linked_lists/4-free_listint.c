#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: pointer to head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
