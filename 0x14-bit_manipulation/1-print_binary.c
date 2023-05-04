#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;
	int lead_zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			lead_zeros = 0;
			_putchar('1');
		}
		else if (!lead_zeros)
			_putchar('0');
		i--;
	}
}
