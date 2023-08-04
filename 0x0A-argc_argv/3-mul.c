#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 3)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
			mult *= atoi(argv[i]);
		printf("%d\n", mult);
	}
	return (0);
}
