#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array of ints using
 * binary search method
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located otherwise -1 if not found or
 * array is null
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
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
