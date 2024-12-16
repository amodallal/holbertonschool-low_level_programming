#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * puts_half - print hlaf string
 *
 * @str: variable
 *
 * Return: return the printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int n = 0;

	while (str[len] != '\0')
	len++;
	if (len % 2 != 0)
	{
		n = ((len - 1) / 2);
	for (i = 0 ; i <= n ; i++)
	_putchar(str[i]);
	}
	else
	{
	for (i = (len / 2) ; i <= (len) ; i++)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
