#include "main.h"

/**
 * puts2 - prints every other character of a string starting with
 * the first character
 * @str: str to be processed
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;
	int c;

	c = 0;
	while (*(str + c) != 0)
		c++;
	for (i = 0; i < c - 1; i += 2)
	{
		if (c == 0 || c == 1)
			_putchar('\n');
		else
		{
			j = *(str + i);
			_putchar(j);
		}
	}
	_putchar('\n');
}
