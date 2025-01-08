#include <stdio.h>
#include <stdlib.h>  /* For atoi */

/**
 * main - Multiplies two numbers passed as command-line arguments
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
