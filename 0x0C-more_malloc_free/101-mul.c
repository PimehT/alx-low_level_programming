#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, num = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}

	return (num * sign);
}

/**
 * _itoa - convert int to string
 * @n: integer to covert
 * @s: converted int
 *
 * Return: pointer to string
 */
char *_itoa(int n, char *s)
{
	int i = 0, j = 0;
	int sign;
	char c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;

	if (n == 0)
	{
		s[i++] = '0';
		s[i] = '\0';
		return (s);
	}

	while (n)
	{
		s[i++] = abs(n % 10) + '0';
		n /= 10;
	}

	if (sign < 0)
		s[i++] = '-';

	s[i] = '\0';

	while (j < i / 2)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
		j++;
	}

	return (s);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

/**
 * mul - multiplies two integers
 * @num1: first int
 * @num2: second int
 *
 * Return: pointer to result
 */
char *mul(char *num1, char *num2)
{
	int i, j, k, n1, n2, product, tmp_len;
	char *tmp, *result;

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!(_isdigit(num1[i])))
			return (NULL);
	}
	for (j = 0; num2[j] != '\0'; j++)
	{
		if (!(_isdigit(num2[j])))
			return (NULL);
	}
	n1 = _strlen(num1);
	n2 = _strlen(num2);
	tmp_len = n1 + n2;
	tmp = calloc(tmp_len, sizeof(char));
	result = calloc(tmp_len + 1, sizeof(char));
	if (tmp == NULL || result == NULL)
		return (NULL);
	product = _atoi(num1) * _atoi(num2);
	_itoa(product, tmp);
	k = _strlen(tmp);
	for (i = 0; i < k; i++)
		result[i] = tmp[i];
	result[k] = '\0';

	free(tmp);
	return (result);
}

/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	result = mul(argv[1], argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}

