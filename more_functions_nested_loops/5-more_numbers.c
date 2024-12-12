#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 9
 *
 *
 * Return: return the numbers
 */
void more_numbers(void)
{
	int i ;
	int j ;

	for (i = 0 ; i <= 10 ; i++)
	{	
		for (j = 0 ; j <=14 ; j++)
		{
			if(j >= 10)
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
			else
			{
			_putchar('0' + j);
			}
		}

		_putchar('\n');
	}

}
