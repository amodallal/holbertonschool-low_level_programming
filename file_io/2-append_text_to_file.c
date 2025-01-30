#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: name of the file to append to.
 * @text_content: NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure (if the file doesn't exist or we
 *         do not have the permission to write).
 *         If filename is NULL, return -1.
 *         If text_content is NULL, return 1 as nothing is added.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len = 0, write_status;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (-1);

    /* Open the file in append mode (O_WRONLY | O_APPEND) */
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1) /* Check if the file cannot be opened */
        return (-1);

    /* If text_content is not NULL, calculate its length */
    if (text_content != NULL)
    {
        while (text_content[len])
            len++;
    }

    /* Write the text content to the file, if provided */
    write_status = write(fd, text_content, len);
    if (write_status == -1) /* Check if writing failed */
    {
        close(fd);
        return (-1);
    }

    /* Close the file descriptor */
    close(fd);

    return (1);
}

