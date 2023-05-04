#include "main.h"

/**
 * clear_bit - sets the index of a number to 0
 * @n: number to edit
 * @index: index of number to edit
 *
 * Return: 1 on success, otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int))
		return (-1);

	*n &= ~(n << index);
	return (1);
}
