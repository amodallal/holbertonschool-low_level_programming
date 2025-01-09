#include <stdio.h>
#include <stdlib.h>  /* For atoi */
#include <ctype.h>   /* For isdigit */

/**
 * main - Adds positive numbers passed as command-line arguments
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}