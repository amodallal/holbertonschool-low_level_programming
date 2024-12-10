#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'q' || letter == 'e')
	{
	letter++;
	}
	putchar(letter);
	}
	putchar('\n'); /* Print a newline after the alphabet */
	}

/**
 * main - Entry point, calls print_alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
