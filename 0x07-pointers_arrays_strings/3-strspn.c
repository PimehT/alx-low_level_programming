#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: prefix substring to compare
 *
 * Return: number of bytes of segment that contains @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *p;

	i = 0;
	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*p == *s)
			{
				i++;
				break;
			}
			p++;
		}
		if (!*p)
			break;

		if (i == strlen(accept))
		{
			while (*s)
			{
				if (*s == ' ')
					break;
				i++;
			}
			return (i);
		}
	}

	return (0);
}
