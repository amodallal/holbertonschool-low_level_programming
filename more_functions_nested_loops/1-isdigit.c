#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _isdigit - check if digit
 * @n: The character to print
 *
 * Return: return 1 if digit , 0 if not
 */
int _isdigit(int n)
{
if (n >= '0' && n <= '9')
{
	n = 1;
}
else
{
	n = 0;
}
return (n);
}
