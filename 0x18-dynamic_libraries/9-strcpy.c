#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to by src, to buffer
 * @src: source string
 * @dest: buffer ie. the destination of copied string
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i, c, c1;

	c = 0;
	while (*(src + c) != '\0')
		c++;
	c1 = c + 1;
	for (i = 0; i < c1; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

