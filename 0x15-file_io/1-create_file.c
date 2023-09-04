#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	else
	{
		len = strlen(text_content);
		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
