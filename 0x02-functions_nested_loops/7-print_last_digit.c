#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @i: the interger to be checked
 * Return: last digit
 */
int print_last_digit(int i)
{
	_putchar(i % 10);
	return (i % 10);
}
