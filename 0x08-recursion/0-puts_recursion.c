#include "main.h"

/**
 * _puts_recursion - it prints a string followed by a new line
 * @s: the string to be printed
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
