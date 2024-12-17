#include "main.h"

/**
 * _strncat - Concatenates two strings up to n characters
 * @dest: The destination string
 * @src: The source string to append to dest
 * @n: The maximum number of characters to append
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
	dest_len++;
	while (i < n && src[i] != '\0')
	{
	dest[dest_len + i] = src[i];
	i++;
	}
dest[dest_len + i] = '\0';
return (dest);
}

