#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter= 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
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
