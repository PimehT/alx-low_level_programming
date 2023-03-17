/**
 * main - this is the main function
 * Return: always 0.
 */

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
		if (i == 'z')
		{
			for (j = 'A' ; j <= 'Z' ; j++)
				putchar(j);
			putchar('\n');
		}
	}
	return (0);
}
