#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * puts2 - print string
 *
 * @str: variable
 *
 * Return: return the printed
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	len++;
	for (i = 0 ; i <= len ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
