#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
 *
 * Return: 0 on success, exits with the respective error code on failure.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, r, w;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Open file_from for reading */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Open file_to for writing, creating it if necessary */
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    /* Copy content from file_from to file_to */
    while ((r = read(fd_from, buffer, 1024)) > 0)
    {
        w = write(fd_to, buffer, r);
        if (w == -1)
        {
            dprintf(2, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (r == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Close file descriptors */
    if (close(fd_from) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}

