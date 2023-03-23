#include "main.h"

/**
 * print_number - print the numbers using _putchar function
 * _putchar - to print a character
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
