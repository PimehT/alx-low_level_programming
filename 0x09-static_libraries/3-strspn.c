#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: prefix substring to compare
 *
 * Return: number of bytes of segment that contains @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, flag;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (count);
	}

	return (0);
}

