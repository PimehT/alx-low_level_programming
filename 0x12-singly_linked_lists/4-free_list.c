#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	head = temp->next;
	free(temp->str);
	free(temp->next);
	free(temp);
}
