#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: The character to check.
 *
 * Description: This function checks the sign of input number
 *
 *
 *
 * Return: 1 if it is alphabetic character
 */
int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else
	{
		n = -1;
		_putchar('-');
	}
return (n);
}
