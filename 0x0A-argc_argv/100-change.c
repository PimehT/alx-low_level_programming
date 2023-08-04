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
	int i, n, change;
	int cent[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	change = 0;
	for (i = 0; i < 5; i++)
	{
		if ((n / cent[i]) > 0)
		{
			change += n / cent[i];
			n = n % cent[i];
		}
	}
	printf("%d\n", change);
	return (0);
}

