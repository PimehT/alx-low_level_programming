#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @i: the interger to be checked
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	_putchar(l);
	return (i % 10);
}
