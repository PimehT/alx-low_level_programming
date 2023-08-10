#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to memory reserved
 */
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);
	if (v == NULL)
		exit(98);
	return (v);
}

