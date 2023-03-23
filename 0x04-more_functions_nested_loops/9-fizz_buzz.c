#include <stdio.h>

/**
 * main - print numbers 1 to 100 except multiple of 3 or 5
 *
 * Return: always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
