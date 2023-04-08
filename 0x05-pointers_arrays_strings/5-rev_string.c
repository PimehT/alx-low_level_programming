#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	char tmp;
	int c, c1, i;

	c = 0;
	c1 = 0;
	while (*(s + c) != 0)
		c++;

	c1 = c - 1;

	for (i = 0; i < c / 2; i++)
	{
		tmp = s[i];
		s[i] = s[c1];
		s[c1] = tmp;
		c1--;
	}
}
