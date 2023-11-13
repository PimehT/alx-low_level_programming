#include "main.h"

/**
 * _isdigit - checks if character c is a number
 * @c: character that is checked
 * Return: 1 if true
 * 0, is returned if false
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	else
		return (0);
}

