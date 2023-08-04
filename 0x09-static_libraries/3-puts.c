#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to the stdout
 * @str: the string to be printed
 * Return: the string
 */
void _puts(char *str)
{
	int i;
	int c;

	for (i = 0; *(str + i) != 0; i++)
	{
		c = *(str + i);
		_putchar(c);
	}
	_putchar('\n');
}

