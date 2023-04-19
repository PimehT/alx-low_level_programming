#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of an array
 * @cmp: compares the values of the integers
 *
 * Return: index of array of number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
