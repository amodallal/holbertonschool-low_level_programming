#include "main.h"
/**
 * print_times_table - Prints the 9 times table, starting from 0,
 * @n: variable
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
	{
	return;
	}

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	product = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');
}

if (product < 10)
{
if (j != 0)
_putchar(' ');
_putchar(product + '0');
}
else if (product < 100)
{
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
else
{
_putchar(product / 100 + '0');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}
