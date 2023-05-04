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
	unsigned int count = 0, convert, decimal = 0, i = 0, j;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		count++;
		i++;
	}

	for (i = 0, j = count - 1; i < count; i++, j--)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		convert = b[i] - 48;
		decimal += (convert * _pow(2, j));
	}

	return (decimal);
}
