#include <stdio.h>

/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	int i;
	long j, k, sum;

	i = 0;
	j = 1;
	k = 2;
	sum = k;
	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
