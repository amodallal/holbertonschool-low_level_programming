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
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ;j++)
		{
			result = i * j;
			if (result >= 10)

				{
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
                        		_putchar(',');
                        		_putchar(' ');
					
				
				}
			else {
					_putchar('0' + result);
					_putchar(',');
					_putchar(' ');	
				
					
			}
		}
		_putchar('\n');
	}
}
