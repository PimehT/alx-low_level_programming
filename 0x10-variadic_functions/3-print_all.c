#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.ih>

/**
 * print_char - prints a char
 * @ap: argument pointer
 *
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an int
 * @ap: argument pointer
 *
 * Return: void
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: argument pointer
 *
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: argument pointer
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char c;
	char *sep = "";

	types_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		c = format[i];

		while (ops[j].op != NULL)
		{
			if (c == *(ops[j].op))
			{
				printf("%s", sep);
				ops[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
