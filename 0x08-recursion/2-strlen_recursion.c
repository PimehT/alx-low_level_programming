#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be counted
 *
 * Return: number counted
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s == 0)
		return (count);
	count++;
	return (count + _strlen_recursion(s + 1));
}
