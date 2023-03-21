#include "main.h"

/**
 * print_sign - prints the sign of an integer n
 * @n: the integer n
 * Return: 1 is greater the zero, 0 is zero
 * -1 is less than zero
 */
int print_sign(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
