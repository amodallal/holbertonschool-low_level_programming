#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * swap_int - swap
 *
 * @a: variable
 * @b: variable
 * Return: return the printed
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;

}