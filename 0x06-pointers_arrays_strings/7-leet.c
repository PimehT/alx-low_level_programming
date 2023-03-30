#include "main.h"

/**
 * leet - replaces all of certain character with numbers in @str
 * @str: string to be modified
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = 4 + '0';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = 3 + '0';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = 0 + '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = 7 + '0';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = 1 + '0';
		i++;
	}

	return (str);
}
