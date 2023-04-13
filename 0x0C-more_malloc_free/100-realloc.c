#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc() and free()
 * @ptr: original memory block
 * @old_size: old size of the block
 * @new_size: new size of the block
 *
 * Return: pointer to new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int old_s = old_size, new_s = new_size;
	void *new_p;

	if (new_s == old_s)
		return (ptr);
	if (ptr == NULL)
		new_p = malloc(new_s);
	if (new_s == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_s > old_s)
	{
		new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);
		i = 0;
		while (*((char *)ptr + i))
		{
			*((char *)new_p + i) = *((char *)ptr + i);
			i++;
		}
	}
	if (new_s < old_s)
	{
		new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);
		i = 0;
		while (*((char *)new_p + i))
		{
			*((char *)new_p + i) = *((char *)ptr + i);
			i++;
		}
	}
	free(ptr);
	return (new_p);
}
