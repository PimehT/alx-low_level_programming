#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, c, f, n, digit;

	i = 0;
	j = 0;
	c = 0;
	f = 0;
	n = 0;
	digit = 0;
	while (s[c] != 0)
		c++;
	while (i < c && j == 0)
	{
		if (s[i] == '-')
			++n;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (n % 2)
				digit = -digit;
			f = f * 10 + digit;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (f);
}
