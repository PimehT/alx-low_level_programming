#include "main.h"

/**
 * _pow - returns exponetial of an int
 * @x: int to exponetiate
 * @y: the power
 *
 * Return: result
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int result = 1;

	if (x == 0)
		return (0);

	if (y == 0)
		return (1);

	result = x * _pow(x, (y - 1));

	return (result);
}

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary string
 *
 * Return: converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal <<= 1;
		if (b[i] == '1')
			decimal += 1;
	}

	return (decimal);
}
