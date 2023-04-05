#include "main.h"
#include <string.h>

/**
 * _palindrome - tests if a string is a palidrome
 * @first: first character to compare
 * @s: string to be checked
 * @last: second character to compare
 *
 * Return: On success 1,
 * otherwise 0.
 */
int _palindrome(int first, char *s, int last)
{
	if (last < 2)
		return (0);
	if (first == last)
		return (1);
	if (strlen(s) % 2 == 0 && first == last + 1)
		return (1);
	if (s[first] == s[last])
		return (_palindrome(first + 1, s, last - 1));
	return (0);
}

/**
 * is_palindrome - determines if a string, @s is in palindrome
 * @s: the string
 *
 * Return: On success 1
 * otherwise, 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (_palindrome(0, s, strlen(s) - 1));
}
