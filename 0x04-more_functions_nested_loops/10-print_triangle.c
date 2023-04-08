#include "main.h"

/**
 * print_triangle - print # character to form triangle shape
 * @size: size of the triangle in lines
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j >= 0; j--)
			{
				if (j > i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
