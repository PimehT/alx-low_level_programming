#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @i: the interger to be checked
 * Return: value of l
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;

	if (l < 0)
		l *= -1;

	_putchar(l + '0');

	return (l);
}
