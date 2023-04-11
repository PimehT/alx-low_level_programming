#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments i.e. av
 * @ac: arguments counter
 * @av: arguments array
 *
 * Return: pointer of concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len, sub_len, len1;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	len = 0;
	while (i < ac)
	{
		len += strlen(av[i]);
		i++;
	}

	s = (char *)malloc((len + 1 + (ac - 2)) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		sub_len = strlen(av[i]);
		for (j = 0; j < sub_len; j++, k++)
		{
			s[k] = av[i][j];
		}
		s[k++] = '\n';
	}
	len1 = len + 1 + (ac - 2);
	s[len1] = '\0';
	return (s);
}
