#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the reverse of a string
 * @s: the string that is reversed
 * Return: the reverse
 */

void print_rev(char *s)
{
	int c;
	int i;
	int j;

	c = 0;
	while (*(s + c) != 0)
	{
		c++;
	}
	for (i = c; i >= 0; i--)
	{
		if (i == 0)
		{
			j = *(s + i);
			_putchar(j);
			_putchar('\n');
		} else
		{
			j = *(s + i);
			_putchar(j);
		}
	}
}
