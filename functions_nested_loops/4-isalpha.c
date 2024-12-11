#include "main.h"
/**
 * _isalpha - Checks if a character is alphabet
 * @c: The character to check.
 *
 * Description: This function checks if the input character `c` is a
 * lowercase letter (from 'a' to 'z' lower or upper)
 * otherwise, it returns 0.
 *
 * Return: 1 if it is alphabetic character
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
