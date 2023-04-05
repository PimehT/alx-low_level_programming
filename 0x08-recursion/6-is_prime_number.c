#include "main.h"

/**
 * _is_prime - the prime number test function
 * @test: checks if it is a factor of @target
 * @target: the number tested
 *
 * Return: 1 on success
 * otherwise, return 0.
 */
int _is_prime(int test, int target)
{
	if (test > target)
		return (1);
	if (target % test == 0 && test > 1 && test != target)
		return (0);
	return (_is_prime(test + 1, target));
}

/**
 * is_prime_number - determines if a number is a prime number
 * @n: number to be checked
 *
 * Return: 1 on success
 * otherwise, return 0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (_is_prime(1, n));
}
