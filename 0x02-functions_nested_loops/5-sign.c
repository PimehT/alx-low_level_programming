#include "main.h"

/**
 * print_sign - prints the sign of an integer n
 * @n: the integer n
 * Return: on success 1
 * On error, return -1, and errno is set appropriately
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		_putchar('0');
	} else
	{
		_putchar('-');
	}
	return (-1);
}
