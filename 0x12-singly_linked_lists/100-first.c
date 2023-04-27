#include "lists.h"

/**
 * before_main - prints text before main().
 *
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	before_main();
	main();

	return (0);
}
