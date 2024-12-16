#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_rev - print string
 *
 * @s: variable
 *
 * Return: return the printed
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
	length++;
	}

	for (i = length ; i >= 0 ; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
