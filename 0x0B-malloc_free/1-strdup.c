#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates copy of string in new allocated memory
 * @str: source string
 *
 * Return: pointer of string copy
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *str1;

	len = 0;
	while (str[len] != 0)
		len++;
	if (len == 0 || str == 0 || str == NULL)
	{
		str1 = (char *)malloc(1 * sizeof(char));
		*str1 = '\n';
		return (str);
	}
	str1 = (char *)malloc((len + 1) * sizeof(char));
	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str1[i] = str[i];
	str1[len] = '\0';
	return (str1);
}
