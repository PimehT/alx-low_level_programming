#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *s3;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != 0)
		len1++;
	while (s2[len2] != 0)
		len2++;
	if (s1 == NULL && s2 == NULL)
	{
		len = 2;
		s3 = (char *)malloc(len * sizeof(char));
		s3[0] = '\n';
		s3[1] = '\n';
	}
	if (s1 == NULL)
		len = len2 + 1;
	else if (s2 == NULL)
		len = len1 + 1;
	else
		len = len1 + len2 + 1;
	s3 = (char *)malloc(len * sizeof(char));
	if (s3 == NULL && len > 1)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (i = 0, j = len1; i < len2 && j < len - 1; i++, j++)
		s3[j] = s2[i];
	s3[len] = '\0';
	return (s3);
}
