#include "lists.h"

/**
 * before_main - prints text before main().
 *
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n")
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	return (0);
}

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main()
{
	before_main();
	main();

	return (0);
}
