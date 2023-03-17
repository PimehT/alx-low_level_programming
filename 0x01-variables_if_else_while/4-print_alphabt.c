/**
 * main - this is the main function
 * Return: always 0
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
		if (i == 'd' || i == 'p')
		{
			++i;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
