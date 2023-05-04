#include "main.h"

/**
 * binary_to_uint - converts a binary string to decimal
 * @b: binary string to convert
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			result = result << 1;
			result = result + 1;
		}
		else if (b[i] == '0')
			result = result << 1;
		else
			return (0);
	}

	return (result);
}
