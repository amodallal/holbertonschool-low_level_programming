#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - print numbers from 0 to 9
 *
 *
 * Return: return the numbers
 */
void print_numbers(void)
{
	int a = 0;

	while (a > 10)
	{
		_putchar('0' + a);
		_putchar('\n');
		a = a + 1;
	}
}
