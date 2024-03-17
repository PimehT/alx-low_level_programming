#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index of where value is located, otherwise -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value && prev < size)
	{
		prev += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
	for (i = prev - step; i <= prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
