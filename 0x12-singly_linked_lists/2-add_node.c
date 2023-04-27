#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to head list
 * @str: string element of list
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	new_list->str = str;
	new_list->len = strlen(str);
	new_list->next = *head;
	*head = new_list;
}
