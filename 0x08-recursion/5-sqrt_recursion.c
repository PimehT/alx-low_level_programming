#include "main.h"

/**
 * _root - finds the square root of a number
 * @test: tests if its square is == @target
 * @target: the square value
 *
 * Return: test value
 */

int _root(int test, int target)
{
	if (test > target)
		return (-1);
	else if (test * test == target)
		return (test);

	return (_root(test + 1, target));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_root(1, n));
}
