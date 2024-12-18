#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the substring of accepted characters
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
	ptr = accept;
	while (*ptr)
	{
	if (*s == *ptr)
	{
	count++;
	break;
	}
	ptr++;
	}
	if (*ptr == '\0')
	break;
	s++;
	}
	return (count);
}

