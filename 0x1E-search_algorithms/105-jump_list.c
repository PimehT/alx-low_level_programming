#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: the value to search for
 *
 * Return: pointer to the first node where value is located, otherwise NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current;
	size_t index, jump, key;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt((double)size);
	index = 0;
	key = 0;

	while ((index < size && list->next && list->n < value))
	{
		current = list;
		key++;
		index = key * jump;
		while (list->next && list->index < index)
			list = list->next;
		printf("Value checked at index [%ld] = [%d]\n", index, list->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	current->index, list->index);
	while (current && current->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
