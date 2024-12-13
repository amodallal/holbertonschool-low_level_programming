#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - print fizzbuzz
 *
 *
 * Return: return the printed
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
		printf("FizzBuzz");
		}
		else if (i % 3  == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
