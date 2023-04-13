#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: the first n characters of string @s2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, j, num, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	num = n;
	if (num >= len2)
		num = len2;
	s3 = (char *)malloc(sizeof(char) * (len1 + num + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < num; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
