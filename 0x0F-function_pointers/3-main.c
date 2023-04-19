#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op_str;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	op_str = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(op_str);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((op_str[0] == '/' || op_str[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
