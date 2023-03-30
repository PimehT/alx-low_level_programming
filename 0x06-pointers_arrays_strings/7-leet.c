#include "main.h"

/**
 * leet - replaces all of certain character with numbers in @str
 * @str: string to be modified
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i, j;
	char leet[8] = {'0', 'L', '*', 'E', 'A', '*', '*', 'T'};

	while (str[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}
		i++;
	}

	return (str);
}
