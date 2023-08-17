#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes
 * @addr: the address to print
 * @size: size
 *
 * Return: Nothing.
 */
void print_opcodes(char *addr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%.2hhx", *(addr + i));
		if (i < size - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, n;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (char *) &main;

	for (i = 0; i < n; i++)
		printf("%.2hhx ", p[i]);

	printf("\n");

	return (0);
}

