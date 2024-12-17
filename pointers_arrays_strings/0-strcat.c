#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _strcat - strcat
 *
 * @src: variable
 * @dest: variable
 * Return: return the printed
 */
char *_strcat(char *dest, char *src)
{	
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest= '\0';
	return dest;
}
