#include "main.h"

/**
 * get_endianness - checks the endiannes
 *
 * Return: if its big 0, or small 1
 */
int get_endianness(void)
{
	int i = 7;
	int *p = i;

	if (p)
		return (1);
	else
		return (0);
}
