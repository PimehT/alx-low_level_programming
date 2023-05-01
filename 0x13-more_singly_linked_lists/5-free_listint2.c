#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (*head == NULL)
		return;

	current = *head
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
