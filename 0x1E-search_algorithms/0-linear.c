#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search algo
 * @array: pointer to the first element of the array to search
 * @size: number of elements of the array
 * @value: value to search for
 * Return: index where value is located otherwise, -1 if not found
 * or NULL if array is empty
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
