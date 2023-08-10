#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: least int in the array
 * @max: largest int in the array
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i, n1, n2, size;
	int *p;

	if (min > max)
		return (NULL);

	size = 0;
	n1 = min;
	n2 = max;
	while (n1 <= n2)
	{
		size++;
		n1++;
	}

	p = (int *)malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0, n1 = min; n1 <= n2; i++, n1++)
		p[i] = n1;

	return (p);
}

