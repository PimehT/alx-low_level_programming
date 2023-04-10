#include "main.h"
/**
 * _isalpha - checks if character c is an alphabet
 * @c: this is the character checked
 * Return: on success 1
 * On error, return 0
 */

int _isalpha(int c)
{
	if ((c > 64) && (c < 123))
	{
		if (!((c > 90) && (c < 97)))
			return (1);
	}
	return (0);
}
