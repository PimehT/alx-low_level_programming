#include <stdio.h>
#include <stdlib.h>

/**
 * main - find the highest prime factor of a number
 * Return: always 0
 */

int main(void)
{
	long int num;
	int div, maxFact;

	div = 2;
	num = 612852475143;
	while (num != 0)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			maxFact = num;
			num = num / div;
			if (num == 1)
			{
				printf("%d\n", maxFact);
				break;
			}
		}
	}

	return (0);
}
