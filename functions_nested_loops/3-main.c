#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Description: print 1 or 0 
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	/*print 1 or 0*/
	int r;

	r = _islower('H');
	_putchar(r + '0');
 	r = _islower('o');
	_putchar(r + '0');
 	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
