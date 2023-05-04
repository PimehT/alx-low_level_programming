#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary string
 *
 * Return: converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, decimal = 0, i = 0, j;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		count++;
		i++;
	}

	for (i = 0; i < count; i++)
	{
		for (j = count - 1; j >= 0; j--)
		{
			decimal += (b[i] - '0') * (2 ^ j);
		}
	}

	return (decimal);
}
