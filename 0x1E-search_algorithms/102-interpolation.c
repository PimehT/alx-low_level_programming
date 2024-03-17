#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located, otherwise -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			fprintf(stderr, "Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
