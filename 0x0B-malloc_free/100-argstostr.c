#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments i.e. av
 * @ac: arguments counter
 * @av: arguments array
 *
 * Return: pointer of concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, k, len;
	long unsigned int j;
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

	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0, k = 0; j < strlen(av[i]); j++, k++)
		{
			s[k] = av[i][j];
		}
	}
	s[len] = '\0';
	return (s);
}
