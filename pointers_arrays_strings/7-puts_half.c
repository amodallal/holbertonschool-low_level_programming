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
	int len = 0, start, i;

	while (str[len] != '\0')
	len++;
	if (len % 2 == 0)
	start = len / 2;
	else
	start = (len - 1) / 2 + 1;
	for (i = start; i < len; i++)
	_putchar(str[i]);
	_putchar('\n');
}
