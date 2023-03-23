#include "main.h"

/**
 * print_triangle - print # character to form triangle shape
 * @size: the number of times to be printed
 * _putchar - to print characters
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int c;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
		_putchar('\n');
}
