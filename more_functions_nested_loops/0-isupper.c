#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _isupper - check if uppercase
 * @n: The character to print
 *
 * Return: return 1 is uppercase and 0 if lowercase
 */
int _isupper(int n)
{
if (n >= 'A' && n <= 'Z')
{
	n = 1;
}
else
{
	n = 0;
}
return (n);
}
