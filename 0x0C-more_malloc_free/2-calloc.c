#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of members of the array
 * @size: size of each member
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *v;

	if (nmemb == 0 || size == 0)
		return (NULL);

	v = (int *)malloc(size * nmemb);

	for (i = 0; i < size; i++)
		v[i] = 0;

	return (v);
}
