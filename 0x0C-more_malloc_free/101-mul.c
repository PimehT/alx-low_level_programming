#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if c is digit
 * @c: character checked
 *
 * Return: 1 on success, otherwise 0
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - counts length of string
 * @s: string counted
 *
 * Return: result
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * mul - multiplies two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: result
 */
char *mul(char num1, char num2)
{
	int i, j, len1, len2, carry, len_result, digit1, digit2, product;
	char *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len_result = len1 + len2;
	result = calloc(len_result + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		if (!(_isdigit(num1[i])))
		{
			free(result);
			return (NULL);
		}
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			if (!(_isdigit(num2[j])))
			{
				free(result);
				return (NULL);
			}
			digit1 = num1[i] - '0';
			digit2 = num2[i] - '0';
			product = digit1 + digit2 + carry + result[i + j + 1];
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i + j + 1] = carry;
	}
	for (i = 0; i < len_result - 1; i++)
		if (result[i] != '0')
			break;
	len_result -= i;
	memmove(result, result + 1, len_result);
	result[len_result] = '\0';

	return (result);
}

/**
 * _puts - prints a string to the stdout
 * @str: the string to print
 *
 * Return: the string
 */
void _puts(char **str)
{
	int i, c;

	for (i = 0; *(str + i) != 0; i++)
	{
		c = *(str + i);
		_putchar(c);
	}
	_putchar('\n');
}
/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: Always 0.
 */
int main(int argc, int **argv)
{
	char *result;
	char *err[6] = "Error";
	char **p;

	if (argc != 3)
	{
		*p = _puts(err);
		return (98);
	}

	result = mul(argv[1], argv[2]);
	if (result == NULL)
	{
		*p = _puts(err);
		return (98);
	}

	*p = _puts(result);
	free(result);

	return (0);
}
