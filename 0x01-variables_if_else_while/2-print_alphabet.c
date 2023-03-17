/**
 * main - this is the main function
 * Return: always 0.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i = i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j = j++;
	}
	return (0);
}
