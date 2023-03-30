#include "main.h"

/**
 * _strcmp - compares string 1 with string 2
 * @s1: first string
 * @s2: second string
 * Return: positive int if @s1 is greater,
 * negative int if @s2 is greater
 * and zero if @s1 and @s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
