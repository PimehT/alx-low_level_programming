#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
