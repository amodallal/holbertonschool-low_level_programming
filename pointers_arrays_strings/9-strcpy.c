#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _strcpy - copy string
 *
 * @src: variable
 * @dest: variable
 * Return: return the printed
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
