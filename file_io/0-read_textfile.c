#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and print it
 * @filename: name of the file to read.
 * @letters: number of letters to read and print.
 *
 * Return: the actual number of letters it could read and print.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amo
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
	return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	close(fd);
	return (0);
	}
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
	free(buffer);
	close(fd);
	return (0);
	}
	free(buffer);
	close(fd);
	return (bytesRead);
}
