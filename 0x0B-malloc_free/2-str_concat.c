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
	if (s1 == 0 && s2 == 0)
	{
		len = 1;
		s3 = (char *)malloc(len * sizeof(char));
		s3[0] = '\n';
	}
	len = len1 + len2 + 1;
	s3 = (char *)malloc(len * sizeof(char));
	if (s3 == NULL && len > 1)
		return (NULL);
	if (len1 == 0)
	{
		for (i = 0; i < len2; i++)
			s3[i] = s2[i];
	} else if (len2 == 0)
	{
		for (i = 0; i < len1; i++)
			s3[i] = s1[i];
	} else
	{
		for (i = 0; i < len1; i++)
			s3[i] = s1[i];
		for (i = 0, j = len1; i < len2 && j < len - 1; i++, j++)
			s3[j] = s2[i];
	}
	s3[len] = '\0';
	return (s3);
}
