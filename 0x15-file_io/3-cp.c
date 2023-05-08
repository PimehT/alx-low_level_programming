#include "main.h"

/**
 * exit_error - print error message
 * @code: the exit code
 * @msg: the error message
 *
 * Return: nothing
 */
void exit_error(int code, char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_count, w_count;
	char buf[BUFSIZE];

	if (argc != 3)
		exit_error(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_error(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error(99, "Error: Can't write to file");

	while ((r_count = read(fd_from, buf, BUFSIZE)) > 0)
	{
		w_count = write(fd_to, buf, r_count);
		if (w_count != r_count)
			exit_error(99, "Error: Can't write to file");
	}

	if (r_count == -1)
		exit_error(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		exit_error(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		exit_error(100, "Error: Can't close fd");

	return (0);
}
