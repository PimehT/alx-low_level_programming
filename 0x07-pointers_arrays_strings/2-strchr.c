#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: A pointer to the first occurence of the character.
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
