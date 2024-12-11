#include "main.h"
/**
 * times_table - Prints the 9 times table, starting from 0,
 *               with results formatted with proper spacing.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;
	
	for (i = 0; i <= n; i++) /* Loop through rows */
	{
	for (j = 0; j <= n; j++) /* Loop through columns */
	{
	result = i * j;

	if (result < 10 && j != 0)
	_putchar(' '); /* Padding for single-digit numbers */

	if (result >= 10)
	{
	_putchar('0' + (result / 10)); /* Tens place */
	_putchar('0' + (result % 10)); /* Ones place */
	}
	else
	{
	_putchar('0' + result); /* Single-digit number */
	}

	if (j != 9)
	{
	_putchar(','); /* Comma separator */
	_putchar(' '); /* Space after comma */
	}
	}
	_putchar('\n'); /* Move to the next line after each row */
	}
	
}
