#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: text to write into the file
 *
 * Return: 1 on success
 * Otherwise, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
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
