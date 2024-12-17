#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _strcat - print
 *
 * @src: variable
 * @dest: variable
 * Return: return the printed
 */
char *_strcat(char *dest, char *src)
{
	 int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}
	while (src[i] != '\0')
	{
	dest[dest_len + i] = src[i];
	i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
