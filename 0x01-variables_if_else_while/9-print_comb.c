/**
 * main - this is the main function
 * Return: always 0
 */

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
		{
			putchar(i + '0' + '\n');
		} else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
