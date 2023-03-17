/**
 * main - this is the main function
 * Return: always 0
 */

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
