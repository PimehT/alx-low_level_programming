#include <stdio.h>
#include <stdlib.h>

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
	unsigned char *p;

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

	p = (unsigned char *) main;

	for (i = 0; i < n; i++)
		printf("%02x ", *(p + i));

	printf("\n");

	return (0);
}
