#include <stdio.h>

/**
 * print_numbers - prints the numbers
 */
void print_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)

	{
		for (j=1 ; j <= 9, j++)
		{
			putchar(i + '0')	
			if (i != 9)
		}

	putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n'); /* Print a newline  */
	}

/**
 * main - Entry point, calls print_alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_numbers();
	return (0);
}
