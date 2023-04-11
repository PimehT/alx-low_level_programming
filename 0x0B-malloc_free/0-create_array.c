#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: size of array
 * @c: specified char
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	} else
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}
