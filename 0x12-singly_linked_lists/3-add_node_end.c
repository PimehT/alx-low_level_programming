#include "lists.h"

/**
 * add_node_end - adds node to the end of the list
 * @head: pointer to the head of the list
 * @str: string element in struct
 *
 * Return: address of last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *current;

	if (str == NULL)
		return (NULL);

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);

	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}

	last_node->len = strlen(str);
	last_node->next = NULL;
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = last_node;

	return (last_node);
}
