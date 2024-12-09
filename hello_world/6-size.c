#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*
*/



int main(void)
{
	/* Print*/
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	/*Return zero to indicate the program executed successfully*/
	return (0);
}
