#include "main.h"

/**
 * print_times_table - print the times table of integer n
 * @n: the integer read
 * return: always 0
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	i = 0;
	if ((n < 0) || (n > 15))
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k > 99)
			{
				_putchar(k / 100 + '0');
				_putchar((k / 10 % 10) + '0');
				_putchar(k % 10 + '0');
			} else if (k > 9)
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			} else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else
				_putchar(k + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
