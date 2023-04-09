#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: counter of command line parameters
 * @argv: vector of strings i.e. command line parameters
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
