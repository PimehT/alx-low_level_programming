#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: string to be modified
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i, j;
	char leet[8] = {'0', 'L', '*', 'E', 'A', '*', '*', 'T'};

	i = 0;
	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || 
			    str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}
		i++;
	}

	return (str);
}
