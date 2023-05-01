#include "lists.h"

/**
 * pop_listint - deletes the head noed of a list
 * and returns head node data
 * @head: head node pointer
 *
 * Return: node data, or 0 for empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value = 0;

	if (*head == NULL)
		return (value);

	temp = *head;
	*head = temp->next;
	value = temp->n;
	free(temp);

	return (value);
}
