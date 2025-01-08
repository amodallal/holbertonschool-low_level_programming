#include "main.h"
/**
 * is_prime_helper - Helper function to determine if n is divisible
 * @n: The number to check
 * @divisor: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	return (1);
	if (n % divisor == 0)
	return (0);
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Determines if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (is_prime_helper(n, 2));
}
