#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Returns the sum of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiplication of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the modulus of a by b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the modulus of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
