#include "main.h"
/**
 * _islower - checks if character is lower case
 * @c: character to be checked
 * Return: on success 1
 * On error, 0 is returned
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	return (0);
}
