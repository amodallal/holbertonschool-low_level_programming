#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_diagonal - print diagonal
 *
 * @n: variable
 * Return: return the printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i <  n ; i++)
		{
			for (j = 1 ; j <= i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
