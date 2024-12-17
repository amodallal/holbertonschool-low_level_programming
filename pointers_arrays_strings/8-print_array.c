#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_array - print hlaf string
 *
 * @n: variable
 * @a: variable
 * Return: return the printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
