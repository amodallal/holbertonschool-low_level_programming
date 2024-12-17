#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string, or 0 if no numbers exist.
 */
int _atoi(char *s)
{
	int result = 0; /* Stores the converted number */
	int sign = 1;   /* Tracks the sign (+/-), default is positive */

	while (*s)
	{
	if (*s == '-')
	sign *= -1;
	else if (*s >= '0' && *s <= '9')
	{
	result = result * 10 + (*s - '0');
	if (*(s + 1) < '0' || *(s + 1) > '9')
	break;
	}
	s++;
	}
	return (result * sign);
}

