#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _memset - print
 *
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: return the printed
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return s;
}
