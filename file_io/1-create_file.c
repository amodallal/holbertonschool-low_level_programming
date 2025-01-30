#include "main.h"

/**
 * create_file - creates a file with the specified text content.
 * @filename: name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 *         If filename is NULL, return -1.
 *         If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_status;

	if (!filename)
	return (-1);
	if (text_content)
	{
	while (text_content[len])
	len++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);
	if (text_content)
	{
	write_status = write(fd, text_content, len);
	if (write_status == -1)
	{
	close(fd);
	return (-1);
	}
	}
	close(fd);
	return (1);
}
