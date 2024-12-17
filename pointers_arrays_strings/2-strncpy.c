#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _strncpy - copy string
 * @n : variable
 * @src: variable
 * @dest: variable
 * Return: return the printed
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
