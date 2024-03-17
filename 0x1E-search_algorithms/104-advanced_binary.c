#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first occurrence of the value, otherwise -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_helper(array, 0, size - 1, value));
}

/**
 * advanced_binary_helper - Recursive helper function for advanced_binary
 * @array: A pointer to the first element of the array to search in
 * @low: The starting index of the array
 * @high: The ending index of the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not present
 */
int advanced_binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t i;
	int mid;

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		printf("%d, ", array[i]);
	}

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_helper(array, low, mid - 1, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_helper(array, mid + 1, high, value));
	else
		return (advanced_binary_helper(array, low, mid - 1, value));
}
