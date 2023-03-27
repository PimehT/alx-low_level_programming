#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array to print from
 * @n: the number of elements to print from the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, j, c;

	c = 0;
	while (*(a + c) != 0)
		c++;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			j = *(a + i);
			printf("%d\n", j);
		} else
		{
			j = *(a + i);
			printf("%d, ", j);
		}
	}
	if (n <= 0)
		printf("\n");
}
