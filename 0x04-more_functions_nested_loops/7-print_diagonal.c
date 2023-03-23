#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the diagonal line should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < i)
					_putchar(' ');
				else if (j == i)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
