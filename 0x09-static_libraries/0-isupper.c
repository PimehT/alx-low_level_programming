#include "main.h"

/**
 * _isupper - checks if character c is uppercase
 * @c: character to be checked
 * Return: 1 if true
 * 0, is returned if false
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
