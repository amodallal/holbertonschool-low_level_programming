#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%d is grater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d is equal to 0\n", n);
	}
	else if (n < 6)
	{
		printf("%d is less than 6\n", n);
	}
	return (0);
}
