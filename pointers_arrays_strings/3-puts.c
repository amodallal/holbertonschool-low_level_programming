#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _strlen - print string
 *
 * @s: variable
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
