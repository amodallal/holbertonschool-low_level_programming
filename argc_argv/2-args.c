#include <stdio.h>

/**
 * main - Prints all arguments received by the program
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
