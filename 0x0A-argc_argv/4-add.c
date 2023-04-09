#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: Always 0.
 * Otherwise return 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			} else if (i == argc - 1)
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			} else
				sum += atoi(argv[i]);
		}
	}
	return (0);
}
