#include "main.h"

/**
 * print_alphabet - Entry point of the program.
 *
 * Description: Calls the print_alphabet function to print the alphabet
 *
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
	{
	/*Print alphabet*/
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		/*Return zero to indicate the program executed successfully*/
		_putchar(letter);
		}
		_putchar('\n');
	}
}
