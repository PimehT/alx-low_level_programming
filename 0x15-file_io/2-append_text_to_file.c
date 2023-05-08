#include "main.h"

/**
 * append_text_to_file - appends text at end of the file
 * @filename: file to be appended
 * @text_content: text to append to file
 *
 * Return: 1 on success,
 * Otherwise, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
