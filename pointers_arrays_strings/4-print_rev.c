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
	int len = 0;

	while (s[len] != '\0')
	len++;
	while (len > 0)
	{
	_putchar(s[len - 1]);
	len--;
	}
	_putchar('\n');
}
