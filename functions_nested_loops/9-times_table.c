#include "main.h"
/**
 * times_table - Checks if a character is lowercase.
 *
 *
 * Description: times table
 *
 *
 *
 * Return: times table
 */

void times_table(void)
{
	int i;
	int j;
	int result;
	for (i = 0 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <=10 ;j++)
		{
			result = i * j;
			_putchar('0' + result);
                        _putchar(',');
                        _putchar(' ');
		}
	}
}
