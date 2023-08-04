#include "main.h"

/**
 * _strncat - append @src string to @dest string except
 * it will use at most n bytes from @src
 * and @src need not be terminated if it contains n or more bytes
 * @src: source string
 * @dest: destination string
 * @n: number of characters from @src that should be printed
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	count = 0;
	while (dest[count] != 0)
		count++;
	for (i = 0; src[i] && i < n; i++)
		dest[count++] = src[i];

	return (dest);
}

