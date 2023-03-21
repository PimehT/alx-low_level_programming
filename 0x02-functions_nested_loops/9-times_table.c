#include "main.h"

/**
 * times_table - the multiplication table function
 * return: always 0
 */
void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			mult = i * j;

			if (mult < 10)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');

			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
