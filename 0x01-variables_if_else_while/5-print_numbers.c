/**
 * main - this is the main function
 * Return: always 0
 */
#include <stdio.h>

int main(void)
{
	int i = 0;
	
	do
	{
		putchar(i);
		i++;
		putchar('\n');
	} while (i < 10)
	return (0);
}
