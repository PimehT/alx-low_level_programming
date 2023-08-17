#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: name to print
 * @f: function on how to print it
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

