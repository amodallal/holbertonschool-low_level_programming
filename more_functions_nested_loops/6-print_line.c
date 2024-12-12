#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_line - print line
 * @n:
 *
 * Return: return line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');	
	}
	else
	{
		for (i = 0 ; i <= n ; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
	}
}
