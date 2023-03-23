#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * _putchar - prints characters
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
