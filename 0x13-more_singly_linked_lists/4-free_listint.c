#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp->next != NULL)
	{
		head = temp->next;
		free(temp);
	}
}
