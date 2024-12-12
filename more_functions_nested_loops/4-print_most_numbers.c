#include "main.h"

/**
 * void print_most_numbers - Entry point of the program.
 *
 * Description: print numbers 
 *
 * Return: Always 0 (Success).
 */
void print_most_numbers(void)
{
int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
	if (i != 2 && i != 4)
	{
	_putchar('0' + i);
	}
	}	
	_putchar('\n');
}
