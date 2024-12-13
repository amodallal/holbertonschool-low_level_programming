#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_triangle - print fizzbuzz
 *
 * @size: size of triangle
 * Return: return the printed
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
			_putchar(' ');
			else
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
