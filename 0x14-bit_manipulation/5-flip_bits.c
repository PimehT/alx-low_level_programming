#include "main.h"

/**
 * flip_bits - checks how many bits to flip to change @n to @m
 * @n: first integer
 * @m: second interger
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;

	count = 0;
	i = 0;
	while (i < (sizeof(unsigned long int) * 8))
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
		i++;
	}

	return (count);
}

