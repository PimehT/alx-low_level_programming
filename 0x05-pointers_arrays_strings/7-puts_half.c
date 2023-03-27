#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be halved
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, c;

	c = 0;
	while (*(str + c) != 0)
		c++;
	if (c % 2 == 0)
	{
		for (i = c / 2; i < c; i++)
		{
			j = *(str + i);
			_putchar(j);
		}
	} else
	{
		for (i = (c + 1) / 2; i < c; i++)
		{
			j = *(str + i);
			_putchar(j);
		}
	}
	_putchar('\n');
}
