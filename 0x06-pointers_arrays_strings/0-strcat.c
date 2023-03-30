#include "main.h"

/**
 * _strcat - appends the source string to the destination string
 * overwriting the terminating null byte (\0)
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int i, count;

	count = 0;
	while (dest[count] != 0)
		count++;
	for (i = 0; src[i]; i++)
		dest[count++] = src[i];

	return (dest);
}
