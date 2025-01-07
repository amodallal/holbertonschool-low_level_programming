#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number whose factorial is to be calculated.
 *
 * Return: The factorial of n.
 *         If n is lower than 0, return -1 (error).
 */
int factorial(int n)
{
	if (n < 0)
	return -1;
	if (n == 0)
	return 1;
	return n * factorial(n - 1);
}
