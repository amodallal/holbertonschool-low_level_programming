#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _puts - print string
 *
 * @str: variable
 *
 * Return: return the printed
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
	_putchar(str[length]);
	length++;
	}
	_putchar('\n');
}
