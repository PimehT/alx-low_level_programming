#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: the source string
 * @dest: the destination string
 * @n: number of characters to copy
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, count;

	count = 0;
	while (src[count] != 0)
		count++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = count; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
