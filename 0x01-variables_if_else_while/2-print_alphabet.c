/**
 * main - this is the main function
 * Return: always 0.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		putchar(\n);
		i = i++;
	}
	return (0);
}
