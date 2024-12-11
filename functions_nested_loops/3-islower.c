#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: This function checks if the input character `c` is a
 * lowercase letter (from 'a' to 'z'). If it is, the function returns 1;
 * otherwise, it returns 0.
 *
 * Return: 1 if `c` is lowercase, 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
