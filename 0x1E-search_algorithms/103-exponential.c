#include "search_algos.h"

/**
 * bin_search - Search for a value in a sorted array of ints using
 * binary search method
 * @array: pointer to the first element of the array to search in
 * @low: lower range
 * @high: higher range
 * @value: value to search for
 *
 * Return: index where value is located otherwise -1 if not found or
 * array is null
*/
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array || size == 0)
		return (-1);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = (i < size - 1) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (bin_search(array, low, high, value));
}
