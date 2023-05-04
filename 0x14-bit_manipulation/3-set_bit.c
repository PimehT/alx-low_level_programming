#include "main.h"

/**
 * set_bit - sets bit to a given value
 * @n: bit to change
 * @index: index of bit to change
 *
 * Return: 1 on success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (*n << index);

	return (1);
}
