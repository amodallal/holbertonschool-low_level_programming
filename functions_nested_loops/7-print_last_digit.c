#include "main.h"
/**
 * print_last_digit - Checks if a character is lowercase.
 * @n: The character to check.
 *
 * Description: This function checks if the input character `c`
 * computes the absolute value of an integer
 *
 *
 * Return: 1 if `c` is lowercase, 0 otherwise.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
	last_digit = n % 10;
	_putchar(last_digit + '0');
	}
	else
	{
	last_digit = n * -1;
	last_digit = last_digit % 10;
	_putchar(last_digit + '0');
	}
	return (last_digit);
}
