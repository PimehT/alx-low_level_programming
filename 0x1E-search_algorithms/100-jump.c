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
	size_t low, high, skip;

	if (!array || size == 0)
		return (-1);

	skip = sqrt(size);
	low = 0;
	high = skip;

	while (low < size && array[high] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (high > size - 1)
			break;
		low = high;
		high += skip;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (value == array[low])
			return (low);
		low++;
	}

	return (-1);
}
